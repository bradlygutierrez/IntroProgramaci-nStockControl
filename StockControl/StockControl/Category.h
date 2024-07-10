#pragma once

using namespace System;

ref class Category
{
public:
    Category(int categoryID, String^ productDescription, String^ productType, String^ productSize);

    property int CategoryID {
        int get() { return categoryID; }
        void set(int value) { categoryID = value; }
    }

    property String^ ProductDescription {
        String^ get() { return productDescription; }
        void set(String^ value) { productDescription = value; }
    }

    property String^ ProductType {
        String^ get() { return productType; }
        void set(String^ value) { productType = value; }
    }

    property String^ ProductSize {
        String^ get() { return productSize; }
        void set(String^ value) { productSize = value; }
    }

private:
    int categoryID;
    String^ productDescription;
    String^ productType;
    String^ productSize;
};

