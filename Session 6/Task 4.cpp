/*
4.Refactor the following code so that the user’s phone number in the UserProfile class is private and can only be set or retrieved using public methods.<br><br><em><strong>Hint:</strong> Add private access modifier to the phone number and create setPhoneNumber() and getPhoneNumber() methods.</em>
*/

#include<iostream>
using namespace std;

class UserProfile
{
private:
    long long phoneNumber;

public:
    void setPhoneNumber(long long phoneNumber)
    {
        this->phoneNumber = phoneNumber;
    }

   long long getPhoneNumber()
    {
        return phoneNumber;
    }
};

int main()
{
    UserProfile userprofile;
    userprofile.setPhoneNumber(6542158632);

    cout<<"User phone number is:"<<userprofile.getPhoneNumber()<<endl;
    return 0;
}
