/*
2.Build a YouTuber class that inherits from SocialMediaUser and adds a property channelName and a method uploadVideo(title) that prints 'Video [title] uploaded to [channelName]'.
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

class YouTuber: public SocialMediaUser
{
private:
    string channelName;

public:
    //passing data to base class
    YouTuber(string n, float f, string cn)
        : SocialMediaUser(n, f)
    {
        channelName = cn;
    }

    void uploadVideo(string title)
    {
        cout<<"Video "<<title<<" uploaded to "<<channelName<<endl;
    }
};

int main()
{
    YouTuber youtuber("Deepanshu Mainh",4000.00,"Haryana dhaba");
    youtuber.displayProfile();
    youtuber.uploadVideo("Panner ki sabji");

    return 0;
}
