#pragma once

using namespace System;
using namespace System::Data::SqlClient;
using namespace System::Windows::Forms;

ref class DatabaseManager
{
public:
    DatabaseManager(String^ connectionString);
    bool ExecuteQueryLogin(String^ query, String^ username, String^ password);
    bool ExecuteQueryRegister(String^ username, String^ useremail, String^ password);

private:
    String^ connString;
    SqlConnection^ sqlConn;
    void OpenConnection();
    void CloseConnection();
};
