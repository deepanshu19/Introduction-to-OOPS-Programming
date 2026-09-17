/*
3.Create a class called FoodOrder with properties: orderId (number), restaurantName (string), and isDelivered (boolean). Write a member function markDelivered() that sets isDelivered to true and prints a message. Instantiate FoodOrder and call markDelivered().
*/

#include <iostream>
using namespace std;

class FoodOrder
{
public:
    int orderId;
    string restaurantName;
    bool isDelivered;

    void markDelivered()
    {
        isDelivered = true;
    }
};

int main()
{
    FoodOrder foodOrder;
    foodOrder.orderId = 457632;
    foodOrder.restaurantName = "Rasna";
    foodOrder.markDelivered();

    cout<<"Order Id:"<<foodOrder.orderId<<endl;
    cout<<"Restaurant name:"<<foodOrder.restaurantName<<endl;
    cout << "Is Food delivered?: " << (foodOrder.isDelivered ? "Yes" : "No") << endl;

    return 0;
}
