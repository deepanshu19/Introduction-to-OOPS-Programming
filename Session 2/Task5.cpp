/*
5.Refactor your FoodOrder class so that the constructor takes an object as a parameter (with keys orderId, restaurantName, isDelivered) instead of separate arguments. Update your instantiation code to use this new constructor signature.
*/

#include <iostream>
using namespace std;

class FoodOrder
{
public:
    int orderId;
    string restaurantName;
    bool isDelivered;

    FoodOrder(int ordId, string resName, bool isDel)
    {
        orderId = ordId;
        restaurantName = resName;
        isDelivered = isDel;
    }

};

int main()
{
    FoodOrder foodOrder(457632,"Rasna",true);

    cout<<"Order Id:"<<foodOrder.orderId<<endl;
    cout<<"Restaurant name:"<<foodOrder.restaurantName<<endl;
    cout << "Is Food delivered?: " << (foodOrder.isDelivered ? "Yes" : "No") << endl;

    return 0;
}
