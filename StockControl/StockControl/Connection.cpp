#include "Connection.h"
#include "User.h"

DatabaseManager::DatabaseManager(String^ connectionString) {
    connString = connectionString;
    sqlConn = gcnew SqlConnection(connString);
}

void DatabaseManager::OpenConnection() {
    try {
        sqlConn->Open();
        MessageBox::Show("Opened Connection.");
    }
    catch (Exception^ e) {
        MessageBox::Show("Failed to connect to database.", "Database Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
    }
}

void DatabaseManager::CloseConnection() {
    if (sqlConn->State == System::Data::ConnectionState::Open) {
        sqlConn->Close();
    }
}

User^ DatabaseManager::ExecuteQueryLogin(String^ query, String^ username, String^ password) {
    OpenConnection();

    User^ user = nullptr;

    try {
        SqlCommand^ command = gcnew SqlCommand(query, sqlConn);
        command->Parameters->AddWithValue("@username", username);
        command->Parameters->AddWithValue("@password", password);

        SqlDataReader^ reader = command->ExecuteReader();
        if (reader->Read()) {
            int id = Convert::ToInt32(reader["UserID"]);
            String^ email = reader["Useremail"]->ToString();
            user = gcnew User(id, username, email, password);
        }
        else {
            MessageBox::Show("Email or password incorrect.", "Email or password error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        }

        reader->Close();
    }
    catch (Exception^ e) {
        MessageBox::Show("Failed to execute query.", "Query Execution Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
    }

    CloseConnection();
    return user;
}

bool DatabaseManager::ExecuteQueryRegister(String^ username, String^ useremail, String^ password) {
    OpenConnection();

    bool result = false;

    try {
        String^ query = "INSERT INTO [BDStock].[dbo].[User] (Username, Useremail, Userpassword) VALUES (@username, @useremail, @password)";
        SqlCommand^ command = gcnew SqlCommand(query, sqlConn);
        command->Parameters->AddWithValue("@username", username);
        command->Parameters->AddWithValue("@useremail", useremail);
        command->Parameters->AddWithValue("@password", password);

        int rowsAffected = command->ExecuteNonQuery();
        if (rowsAffected > 0) {
            MessageBox::Show("User registered successfully.", "Registration Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
            result = true;
        }
        else {
            MessageBox::Show("Failed to register user.", "Registration Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        }
    }
    catch (Exception^ e) {
        MessageBox::Show("Failed to execute query.", "Query Execution Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
    }
    return result;
}

DataTable^ DatabaseManager::SelectAllCategories() {
    OpenConnection();
    DataTable^ dataTable = gcnew DataTable();

    try {
        String^ query = "SELECT * FROM [BDStock].[dbo].[Category]";
        SqlDataAdapter^ adapter = gcnew SqlDataAdapter(query, sqlConn);
        adapter->Fill(dataTable);
    }
    catch (Exception^ e) {
        MessageBox::Show("Failed to execute query.", "Query Execution Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
    }

    CloseConnection();
    return dataTable;
}

DataTable^ DatabaseManager::SearchCategories(String^ searchQuery) {
    OpenConnection();
    DataTable^ dataTable = gcnew DataTable();

    try {
        String^ query = "SELECT * FROM [BDStock].[dbo].[Category] WHERE Productdescription LIKE '%' + @search + '%' OR Producttype LIKE '%' + @search + '%'";
        SqlCommand^ command = gcnew SqlCommand(query, sqlConn);
        command->Parameters->AddWithValue("@search", searchQuery);

        SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);
        adapter->Fill(dataTable);
    }
    catch (Exception^ e) {
        MessageBox::Show("Failed to execute query.", "Query Execution Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
    }

    CloseConnection();
    return dataTable;
}

Category^ DatabaseManager::GetCategoryById(int categoryId) {
    OpenConnection();
    Category^ category = nullptr;

    try {
        String^ query = "SELECT * FROM [BDStock].[dbo].[Category] WHERE CategoryID = @categoryId";
        SqlCommand^ command = gcnew SqlCommand(query, sqlConn);
        command->Parameters->AddWithValue("@categoryId", categoryId);

        SqlDataReader^ reader = command->ExecuteReader();
        if (reader->Read()) {
            int id = Convert::ToInt32(reader["CategoryID"]);
            String^ desc = safe_cast<String^>(reader["Productdescription"]);
            String^ type = safe_cast<String^>(reader["Producttype"]);
            String^ size = safe_cast<String^>(reader["Productsize"]);
            category = gcnew Category(id, desc, type, size);
        }

        reader->Close();
    }
    catch (Exception^ e) {
        MessageBox::Show("Failed to execute query.", "Query Execution Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
    }

    CloseConnection();
    return category;
}

bool DatabaseManager::CreateNewCategory(String^ productDescription, String^ productType, String^ productSize) {
    OpenConnection();

    try {
        String^ query = "INSERT INTO [Category] (Productdescription, Producttype, Productsize) VALUES (@productDescription, @productType, @productSize)";
        SqlCommand^ command = gcnew SqlCommand(query, sqlConn);
        command->Parameters->AddWithValue("@productDescription", productDescription);
        command->Parameters->AddWithValue("@productType", productType);
        command->Parameters->AddWithValue("@productSize", productSize);

        int rowsAffected = command->ExecuteNonQuery();
        if (rowsAffected > 0) {
            return true;
        }
        else {
            MessageBox::Show("Failed to create category.", "Create Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
            return false;
        }
    }
    catch (Exception^ e) {
        MessageBox::Show("Failed to execute query.", "Query Execution Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        return false;
    }
    finally {
        CloseConnection();
    }
}

bool DatabaseManager::DeleteCategory(int categoryID) {
    OpenConnection();

    try {
        String^ query = "DELETE FROM [BDStock].[dbo].[Category] WHERE CategoryID = @categoryID";
        SqlCommand^ command = gcnew SqlCommand(query, sqlConn);
        command->Parameters->AddWithValue("@categoryID", categoryID);

        int rowsAffected = command->ExecuteNonQuery();
        if (rowsAffected > 0) {
            return true;
        }
        else {
            MessageBox::Show("Category not found or failed to delete.", "Delete Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
            return false;
        }
    }
    catch (Exception^ e) {
        MessageBox::Show("Failed to execute query.", "Query Execution Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        return false;
    }
    finally {
        CloseConnection();
    }
}

bool DatabaseManager::EditCategory(int categoryID, String^ productDescription, String^ productType, String^ productSize) {
    OpenConnection();

    try {
        String^ query = "UPDATE [Category] SET Productdescription = @productDescription, Producttype = @productType, Productsize = @productSize WHERE CategoryID = @categoryID";
        SqlCommand^ command = gcnew SqlCommand(query, sqlConn);
        command->Parameters->AddWithValue("@categoryID", categoryID);
        command->Parameters->AddWithValue("@productDescription", productDescription);
        command->Parameters->AddWithValue("@productType", productType);
        command->Parameters->AddWithValue("@productSize", productSize);

        int rowsAffected = command->ExecuteNonQuery();
        if (rowsAffected > 0) {
            return true;
        }
        else {
            MessageBox::Show("Category not found or failed to update.", "Edit Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
            return false;
        }
    }
    catch (Exception^ e) {
        MessageBox::Show("Failed to execute query.", "Query Execution Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        return false;
    }
    finally {
        CloseConnection();
    }
}

//User Functions

DataTable^ DatabaseManager::SelectAllUsers()
{
    OpenConnection();
    DataTable^ dataTable = gcnew DataTable();

    try {
        String^ query = "SELECT * FROM [BDStock].[dbo].[User]";
        SqlDataAdapter^ adapter = gcnew SqlDataAdapter(query, sqlConn);
        adapter->Fill(dataTable);
    }
    catch (Exception^ e) {
        MessageBox::Show("Failed to execute query.", "Query Execution Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
    }

    CloseConnection();
    return dataTable;
}

DataTable^ DatabaseManager::SearchUsers(String^ searchQuery)
{
    OpenConnection();
    DataTable^ dataTable = gcnew DataTable();

    try {
        String^ query = "SELECT * FROM [BDStock].[dbo].[User] WHERE Username LIKE '%' + @search + '%' OR Useremail LIKE '%' + @search + '%'";
        SqlCommand^ command = gcnew SqlCommand(query, sqlConn);
        command->Parameters->AddWithValue("@search", searchQuery);

        SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);
        adapter->Fill(dataTable);
    }
    catch (Exception^ e) {
        MessageBox::Show("Failed to execute query.", "Query Execution Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
    }

    CloseConnection();
    return dataTable;
}

User^ DatabaseManager::getUserByID(int userID)
{
    OpenConnection();
    User^ user = nullptr;

    try {
        String^ query = "SELECT * FROM [BDStock].[dbo].[User] WHERE UserID = @userID";
        SqlCommand^ command = gcnew SqlCommand(query, sqlConn);
        command->Parameters->AddWithValue("@userID", userID);

        SqlDataReader^ reader = command->ExecuteReader();
        if (reader->Read()) {
            int id = Convert::ToInt32(reader["UserID"]);
            String^ username = safe_cast<String^>(reader["Username"]);
            String^ useremail = safe_cast<String^>(reader["Useremail"]);
            String^ password = safe_cast<String^>(reader["Userpassword"]);
            user = gcnew User(id, username, useremail, password);
        }

        reader->Close();
    }
    catch (Exception^ e) {
        MessageBox::Show("Failed to execute query.", "Query Execution Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
    }

    CloseConnection();
    return user;
}

bool DatabaseManager::DeleteUser(int userID)
{
    OpenConnection();

    try {
        String^ query = "DELETE FROM [BDStock].[dbo].[User] WHERE UserID = @userID";
        SqlCommand^ command = gcnew SqlCommand(query, sqlConn);
        command->Parameters->AddWithValue("@userID", userID);

        int rowsAffected = command->ExecuteNonQuery();
        if (rowsAffected > 0) {
            return true;
        }
        else {
            MessageBox::Show("User not found or failed to delete.", "Delete Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
            return false;
        }
    }
    catch (Exception^ e) {
        MessageBox::Show("Failed to execute query.", "Query Execution Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        return false;
    }
    finally {
        CloseConnection();
    }
}

bool DatabaseManager::EditUser(int userID, String^ useremail, String^ username, String^ userpassword)
{
    OpenConnection();

    try {
        String^ query = "UPDATE [User] SET Username = @Username, Useremail = @Useremail, Userpassword = @Userpassword WHERE UserID = @UserID";
        SqlCommand^ command = gcnew SqlCommand(query, sqlConn);
        command->Parameters->AddWithValue("@UserID", userID);
        command->Parameters->AddWithValue("@Useremail", useremail);
        command->Parameters->AddWithValue("@Username", username);
        command->Parameters->AddWithValue("@Userpassword", userpassword);

        int rowsAffected = command->ExecuteNonQuery();
        if (rowsAffected > 0) {
            return true;
        }
        else {
            MessageBox::Show("User not found or failed to update.", "Edit Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
            return false;
        }
    }
    catch (Exception^ e) {
        MessageBox::Show("Failed to execute query.", "Query Execution Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        return false;
    }
    finally {
        CloseConnection();
    }
}
DataTable^ DatabaseManager::SelectAllOutputs() {
    OpenConnection();
    DataTable^ dataTable = gcnew DataTable();

    try {
        String^ query = "SELECT * FROM [BDStock].[dbo].[Output]";
        SqlDataAdapter^ adapter = gcnew SqlDataAdapter(query, sqlConn);
        adapter->Fill(dataTable);
    }
    catch (Exception^ e) {
        MessageBox::Show("Failed to execute query.", "Query Execution Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
    }

    CloseConnection();
    return dataTable;
}
DataTable^ DatabaseManager::SearchOutputs(String^ searchQuery) {
    OpenConnection();
    DataTable^ dataTable = gcnew DataTable();

    try {
        String^ query = "SELECT * FROM [BDStock].[dbo].[Output] WHERE Outputid LIKE '%' + @search + '%' OR Userid LIKE '%' + @search + '%'";
        SqlCommand^ command = gcnew SqlCommand(query, sqlConn);
        command->Parameters->AddWithValue("@search", searchQuery);

        SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);
        adapter->Fill(dataTable);
    }
    catch (Exception^ e) {
        MessageBox::Show("Failed to execute query.", "Query Execution Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
    }

    CloseConnection();
    return dataTable;
}
Output^ DatabaseManager::GetOutputById(int outputId) {
    OpenConnection();
    Output^ output = nullptr;

    try {
        String^ query = "SELECT * FROM [BDStock].[dbo].[Output] WHERE OutputID = @outputId";
        SqlCommand^ command = gcnew SqlCommand(query, sqlConn);
        command->Parameters->AddWithValue("@outputId", outputId);

        SqlDataReader^ reader = command->ExecuteReader();
        if (reader->Read()) {
            int id = Convert::ToInt32(reader["OutputID"]);
            DateTime date = Convert::ToDateTime(reader["Outputdate"]);
            double price = Convert::ToDouble(reader["Outputprice"]);
            int quantity = Convert::ToInt32(reader["Outputquantity"]);
            int productid = Convert::ToInt32(reader["Productid"]);
            int userid = Convert::ToInt32(reader["Userid"]);
            output = gcnew Output(id, date, price, quantity, productid, userid);
        }

        reader->Close();
    }
    catch (Exception^ e) {
        MessageBox::Show("Failed to execute query.", "Query Execution Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
    }

    CloseConnection();
    return output;
}
bool DatabaseManager::DeleteOutput(int outputID) {
    OpenConnection();

    try {
        String^ query = "DELETE FROM [BDStock].[dbo].[Output] WHERE OutputID = @outputID";
        SqlCommand^ command = gcnew SqlCommand(query, sqlConn);
        command->Parameters->AddWithValue("@outputID", outputID);

        int rowsAffected = command->ExecuteNonQuery();
        if (rowsAffected > 0) {
            return true;
        }
        else {
            MessageBox::Show("Output not found or failed to delete.", "Delete Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
            return false;
        }
    }
    catch (Exception^ e) {
        MessageBox::Show("Failed to execute query.", "Query Execution Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        return false;
    }
    finally {
        CloseConnection();
    }
}



DataTable^ DatabaseManager::SelectAllProducts()
{
    DataTable^ dt = gcnew DataTable();
    try
    {
        SqlConnection^ conn = gcnew SqlConnection(connString);
        SqlCommand^ cmd = gcnew SqlCommand("SELECT ProductID, Productname FROM [BDStock].[dbo].[Product]", conn);
        SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd);
        adapter->Fill(dt);
    }
    catch (Exception^ ex)
    {
        // Manejo de errores
    }
    return dt;
}

bool DatabaseManager::CreateNewOutput(DateTime outputDate, double outputPrice, int outputQuantity, int productID, int userID) {
    OpenConnection();

    try {
        String^ formattedDate = outputDate.ToString("yyyy-MM-dd HH:mm:ss");
        String^ query = "INSERT INTO [Output] (Outputdate, Outputprice, Outputquantity, ProductID, UserID) VALUES (@outputDate, @outputPrice, @outputQuantity, @productID, @userID)";
        SqlCommand^ command = gcnew SqlCommand(query, sqlConn);
        command->Parameters->AddWithValue("@outputDate", formattedDate);
        command->Parameters->AddWithValue("@outputPrice", outputPrice);
        command->Parameters->AddWithValue("@outputQuantity", outputQuantity);
        command->Parameters->AddWithValue("@productID", productID);
        command->Parameters->AddWithValue("@userID", userID);

        int rowsAffected = command->ExecuteNonQuery();
        if (rowsAffected > 0) {
            return true;
        }
        else {
            MessageBox::Show("Failed to create output.", "Create Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
            return false;
        }
    }
    catch (Exception^ e) {
        MessageBox::Show("Failed to execute query.", "Query Execution Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        return false;
    }
    finally {
        CloseConnection();
    }
}

DataTable^ DatabaseManager::SelectAllInputs() {
    OpenConnection();
    DataTable^ dataTable = gcnew DataTable();

    try {
        String^ query = "SELECT * FROM [BDStock].[dbo].[Input]";
        SqlDataAdapter^ adapter = gcnew SqlDataAdapter(query, sqlConn);
        adapter->Fill(dataTable);
    }
    catch (Exception^ e) {
        MessageBox::Show("Failed to execute query.", "Query Execution Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
    }

    CloseConnection();
    return dataTable;
}
DataTable^ DatabaseManager::SearchInputs(String^ searchQuery) {
    OpenConnection();
    DataTable^ dataTable = gcnew DataTable();

    try {
        String^ query = "SELECT * FROM [BDStock].[dbo].[Input] WHERE Inputid LIKE '%' + @search + '%' OR Userid LIKE '%' + @search + '%'";
        SqlCommand^ command = gcnew SqlCommand(query, sqlConn);
        command->Parameters->AddWithValue("@search", searchQuery);

        SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);
        adapter->Fill(dataTable);
    }
    catch (Exception^ e) {
        MessageBox::Show("Failed to execute query.", "Query Execution Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
    }

    CloseConnection();
    return dataTable;
}
Input^ DatabaseManager::GetInputById(int inputId) {
    OpenConnection();
    Input^ input = nullptr;

    try {
        String^ query = "SELECT * FROM [BDStock].[dbo].[Input] WHERE InputID = @inputId";
        SqlCommand^ command = gcnew SqlCommand(query, sqlConn);
        command->Parameters->AddWithValue("@inputId", inputId);

        SqlDataReader^ reader = command->ExecuteReader();
        if (reader->Read()) {
            int id = Convert::ToInt32(reader["InputID"]);
            DateTime date = Convert::ToDateTime(reader["Inputdate"]);
            double price = Convert::ToDouble(reader["Inputprice"]);
            int quantity = Convert::ToInt32(reader["Inputquantity"]);
            int productid = Convert::ToInt32(reader["Productid"]);
            int userid = Convert::ToInt32(reader["Userid"]);
            input = gcnew Input(id, date, price, quantity, productid, userid);
        }

        reader->Close();
    }
    catch (Exception^ e) {
        MessageBox::Show("Failed to execute query.", "Query Execution Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
    }

    CloseConnection();
    return input;
}
bool DatabaseManager::DeleteInput(int inputID) {
    OpenConnection();

    try {
        String^ query = "DELETE FROM [BDStock].[dbo].[Input] WHERE InputID = @inputID";
        SqlCommand^ command = gcnew SqlCommand(query, sqlConn);
        command->Parameters->AddWithValue("@inputID", inputID);

        int rowsAffected = command->ExecuteNonQuery();
        if (rowsAffected > 0) {
            return true;
        }
        else {
            MessageBox::Show("Output not found or failed to delete.", "Delete Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
            return false;
        }
    }
    catch (Exception^ e) {
        MessageBox::Show("Failed to execute query.", "Query Execution Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        return false;
    }
    finally {
        CloseConnection();
    }
}
bool DatabaseManager::CreateNewInput(DateTime inputDate, double inputPrice, int inputQuantity, int productID, int userID) {
    OpenConnection();

    try {

        String^ query = "INSERT INTO [Input] (Inputdate, Inputprice, Inputquantity, ProductID, UserID) VALUES (@inputDate, @inputPrice, @inputQuantity, @productID, @userID)";
        SqlCommand^ command = gcnew SqlCommand(query, sqlConn);
        command->Parameters->AddWithValue("@inputDate", inputDate);
        command->Parameters->AddWithValue("@inputPrice", inputPrice);
        command->Parameters->AddWithValue("@inputQuantity", inputQuantity);
        command->Parameters->AddWithValue("@productID", productID);
        command->Parameters->AddWithValue("@userID", userID);

        int rowsAffected = command->ExecuteNonQuery();
        if (rowsAffected > 0) {
            return true;
        }
        else {
            MessageBox::Show("Failed to create output.", "Create Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
            return false;
        }
    }
    catch (Exception^ e) {
        MessageBox::Show("Failed to execute query.", "Query Execution Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        return false;
    }
    finally {
        CloseConnection();
    }
}

int DatabaseManager::GetProductIDByName(String^ productName) {
    OpenConnection();

    try {
        String^ query = "SELECT ProductID FROM Product WHERE Productname = @productName";
        SqlCommand^ command = gcnew SqlCommand(query, sqlConn);
        command->Parameters->AddWithValue("@productName", productName);

        SqlDataReader^ reader = command->ExecuteReader();
        if (reader->Read()) {
            int productID = reader->GetInt32(0);
            reader->Close();
            return productID;
        }
        else {
            reader->Close();
            return -1; // Producto no encontrado
        }
    }
    catch (Exception^ e) {
        MessageBox::Show("An error occurred: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return -1;
    }
    finally {
        CloseConnection();
    }
}

int DatabaseManager::GetUserIDByName(String^ userName) {
    OpenConnection();

    try {
        String^ query = "SELECT UserID FROM [User] WHERE Username = @userName";
        SqlCommand^ command = gcnew SqlCommand(query, sqlConn);
        command->Parameters->AddWithValue("@userName", userName);

        SqlDataReader^ reader = command->ExecuteReader();
        if (reader->Read()) {
            int userID = reader->GetInt32(0);
            reader->Close();
            return userID;
        }
        else {
            reader->Close();
            return -1; // Usuario no encontrado
        }
    }
    catch (Exception^ e) {
        MessageBox::Show("An error occurred: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return -1;
    }
    finally {
        CloseConnection();
    }
}

