#include "Category.h"

Category::Category(int categoryID, String^ productDescription, String^ productType, String^ productSize) {
    this->categoryID = categoryID;
    this->productDescription = productDescription;
    this->productType = productType;
    this->productSize = productSize;
}
