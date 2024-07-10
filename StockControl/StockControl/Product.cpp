#include "Product.h"

Product::Product(int productID, String^ productName, String^ productColor, double productPrice, int categoryID, int productQuantity) {
    this->productID = productID;
    this->productName = productName;
    this->productColor = productColor;
    this->productPrice = productPrice;
    this->categoryID = categoryID;
    this->productQuantity = productQuantity;
}
