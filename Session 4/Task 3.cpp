/*
3.Create a Podcaster class that also inherits from SocialMediaUser and adds a property podcastName and a method publishEpisode(episodeTitle) that prints 'Episode [episodeTitle] published on [podcastName]'.
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

class Podcaster: public SocialMediaUser
{
private:
    string podcastName;
public:
    Podcaster(string n, float f,string pn):SocialMediaUser(n,f)
    {
        podcastName = pn;
    }
    void publishEpisode(string episodeTitle)
    {
        cout<<"Episode "<<episodeTitle<<" published on "<<podcastName<<endl;
    }
};

int main()
{
    Podcaster podcaster("Deepanshu Mainh",4000.00,"Coding Culture");
    podcaster.displayProfile();
    podcaster.publishEpisode("Learn c++");

    return 0;
}
