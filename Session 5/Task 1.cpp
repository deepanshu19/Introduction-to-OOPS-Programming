/*
1.Create a Java class called PaymentProcessor with two overloaded methods processPayment(): one that takes only an amount, and one that takes amount and a coupon code. Print which version is called and the final amount in each case.
*/

#include<iostream>
using namespace std;

class PaymentProcessor
{
public:
   void processPayment(double amount)
   {
       cout<<"processPayment(amount) called"<<endl;
       cout<<"Final Amount: Rs. "<<amount<<endl;
   }

   void processPayment(double amount, string couponCode)
   {
       double discount = amount * 0.10;
       double finalAmount = amount - discount;

        cout << "processPayment(amount, couponCode) called" << endl;
        cout << "Coupon Code: " << couponCode << endl;
        cout << "Final Amount: Rs. " << finalAmount << endl;
   }
};

int main()
{
    PaymentProcessor payment;

    payment.processPayment(1000);
    cout<<endl;

    payment.processPayment(1000,"SAVE10");

    return 0;

}
