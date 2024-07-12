#pragma once
#include "User.h"
#include "Category.h"
#include "Output.h"
#include "Input.h"

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
    
    //User functions

    DataTable^ SelectAllUsers();
    DataTable^ SearchUsers(String^ searchQuery);
    User^ getUserByID(int userID);
    bool DeleteUser(int userID);
    bool EditUser(int userID, String^ useremail, String^ username, String^ userpassword);

    DataTable^ SelectAllOutputs();
    DataTable^ SearchOutputs(String^ searchQuery);
    Output^ GetOutputById(int outputId);
    bool DeleteOutput(int outputID);
    DataTable^ SelectAllProducts();
    bool CreateNewOutput(DateTime outputDate, double outputPrice, int outputQuantity, int productID, int userID);
    DataTable^ SelectAllInputs();
    DataTable^ SearchInputs(String^ searchQuery);
    Input^ GetInputById(int inputId);
    bool DeleteInput(int inputID);
    bool CreateNewInput(DateTime inputDate, double inputPrice, int inputQuantity, int productID, int userID);
    int GetProductIDByName(String^ productName);
    int GetUserIDByName(String^ userName);
private:
    String^ connString;
    SqlConnection^ sqlConn;
    void OpenConnection();
    void CloseConnection();
};
