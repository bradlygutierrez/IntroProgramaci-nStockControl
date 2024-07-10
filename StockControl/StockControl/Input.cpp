#include "Input.h"

Input::Input(int inputID, DateTime inputDate, double inputPrice, int inputQuantity, int productID, int userID) {
    this->inputID = inputID;
    this->inputDate = inputDate;
    this->inputPrice = inputPrice;
    this->inputQuantity = inputQuantity;
    this->productID = productID;
    this->userID = userID;
}
