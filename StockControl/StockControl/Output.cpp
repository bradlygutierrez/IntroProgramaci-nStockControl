#include "Output.h"

Output::Output(int outputID, DateTime outputDate, double outputPrice, int outputQuantity, int productID, int userID) {
    this->outputID = outputID;
    this->outputDate = outputDate;
    this->outputPrice = outputPrice;
    this->outputQuantity = outputQuantity;
    this->productID = productID;
    this->userID = userID;
}
