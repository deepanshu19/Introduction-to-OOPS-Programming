/*
1.Create a base class called SocialMediaUser with properties username and followers, and a method displayProfile() that prints the username and follower count.
*/
#include<iostream>
using namespace std;

class SocialMediaUser
{
private:
    string username;
    float followers;

public:
    SocialMediaUser(string n,float f)
    {
        username = n;
        followers = f;
    }

    void displayProfile()
    {
        cout<<"User name is "<<username<<" and followers count is "<<followers<<endl;
    }
};

int main()
{
    SocialMediaUser socialMediaUser("Deepanshu Mainh",4000.00);
    socialMediaUser.displayProfile();

    return 0;
}
