#include "Connection.h"

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

bool DatabaseManager::ExecuteQueryLogin(String^ query, String^ username, String^ password) {
    OpenConnection();

    bool result = false;

    try {
        SqlCommand^ command = gcnew SqlCommand(query, sqlConn);
        command->Parameters->AddWithValue("@username", username);
        command->Parameters->AddWithValue("@password", password);

        SqlDataReader^ reader = command->ExecuteReader();
        if (reader->Read()) {
            result = true;
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
    return result;
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

    CloseConnection();
    return result;
}