#pragma once

using namespace System;

ref class Output
{
public:
    Output(int outputID, DateTime outputDate, double outputPrice, int outputQuantity, int productID, int userID);

    property int OutputID {
        int get() { return outputID; }
        void set(int value) { outputID = value; }
    }

    property DateTime OutputDate {
        DateTime get() { return outputDate; }
        void set(DateTime value) { outputDate = value; }
    }

    property double OutputPrice {
        double get() { return outputPrice; }
        void set(double value) { outputPrice = value; }
    }

    property int OutputQuantity {
        int get() { return outputQuantity; }
        void set(int value) { outputQuantity = value; }
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
    int outputID;
    DateTime outputDate;
    double outputPrice;
    int outputQuantity;
    int productID;
    int userID;
};
