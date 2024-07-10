#pragma once
#include "User.h"
#include "Category.h" 

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::IO;
using namespace System::Windows::Forms;



ref class DatabaseManager
{
public:
    DatabaseManager(String^ connectionString);
    User^ ExecuteQueryLogin(String^ query, String^ username, String^ password);
    bool ExecuteQueryRegister(String^ username, String^ useremail, String^ password);
    DataTable^ SelectAllCategories();
    DataTable^ SearchCategories(String^ searchQuery);
    Category^ GetCategoryById(int categoryId);
    bool DeleteCategory(int categoryID);
    bool CreateNewCategory(String^ productDescription, String^ productType, String^ productSize);
    bool EditCategory(int categoryID, String^ productDescription, String^ productType, String^ productSize);

private:
    String^ connString;
    SqlConnection^ sqlConn;
    void OpenConnection();
    void CloseConnection();
};
