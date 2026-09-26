/*
3.Imagine a Flipkart-like app: create an abstract class Product with an abstract method upload(). Then, create two subclasses, Electronics and Clothing, that each implement the upload() method to print a different upload message.
*/

#include<iostream>
using namespace std;

class Product
{
protected:
    virtual void upload()=0;
};

class Electronics:public Product
{
public:
    void upload()
    {
        cout<<"Electronics category Item uploaded in catalouge"<<endl;
    }
};


class Clothing:public Product
{
public:
    void upload()
    {
        cout<<"Clothing category Item uploaded in catalouge"<<endl;
    }
};

int main()
{
    Electronics electronics;
    electronics.upload();

    Clothing clothing;
    clothing.upload();

    return 0;
}
