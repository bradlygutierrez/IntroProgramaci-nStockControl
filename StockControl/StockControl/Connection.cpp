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
