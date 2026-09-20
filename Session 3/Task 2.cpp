/*
2.Build a class Product for a Flipkart-style app with a parameterized constructor that takes productName, price, and rating as arguments and displays all details using a displayInfo() method.
*/

#include<iostream>
using namespace std;

class Order
{
private:
    string productName;
    float price;
    float rating;

public:
    Order(string pName, float prc, float rtng)
    {
        productName = pName;
        price = prc;
        rating = rtng;
    }

    void displayInfo()
    {
        cout<<"Product name:"<<productName<<endl;
        cout<<"Price of product:"<<price<<endl;
        cout<<"Rating of product:"<<rating<<endl;
    }
};

int main()
{
    Order order("Iphone 18 pro",164000,4.5);

    order.displayInfo();
    return 0;
}
