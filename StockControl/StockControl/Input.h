#pragma once

using namespace System;

ref class Input
{
public:
    Input(int inputID, DateTime inputDate, double inputPrice, int inputQuantity, int productID, int userID);

    property int InputID {
        int get() { return inputID; }
        void set(int value) { inputID = value; }
    }

    property DateTime InputDate {
        DateTime get() { return inputDate; }
        void set(DateTime value) { inputDate = value; }
    }

    property double InputPrice {
        double get() { return inputPrice; }
        void set(double value) { inputPrice = value; }
    }

    property int InputQuantity {
        int get() { return inputQuantity; }
        void set(int value) { inputQuantity = value; }
    }

    property int ProductID {
        int get() { return productID; }
        void set(int value) { productID = value; }
    }

    property int UserID {
        int get() { return userID; }
        void set(int value) { userID = value; }
    }

private:
    int inputID;
    DateTime inputDate;
    double inputPrice;
    int inputQuantity;
    int productID;
    int userID;
};

