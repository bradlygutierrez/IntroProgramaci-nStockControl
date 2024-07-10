#pragma once

using namespace System;

ref class Product
{
public:
    Product(int productID, String^ productName, String^ productColor, double productPrice, int categoryID, int productQuantity);

    property int ProductID {
        int get() { return productID; }
        void set(int value) { productID = value; }
    }

    property String^ ProductName {
        String^ get() { return productName; }
        void set(String^ value) { productName = value; }
    }

    property String^ ProductColor {
        String^ get() { return productColor; }
        void set(String^ value) { productColor = value; }
    }

    property double ProductPrice {
        double get() { return productPrice; }
        void set(double value) { productPrice = value; }
    }

    property int CategoryID {
        int get() { return categoryID; }
        void set(int value) { categoryID = value; }
    }

    property int ProductQuantity {
        int get() { return productQuantity; }
        void set(int value) { productQuantity = value; }
    }

private:
    int productID;
    String^ productName;
    String^ productColor;
    double productPrice;
    int categoryID;
    int productQuantity;
};
