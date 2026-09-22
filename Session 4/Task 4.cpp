/*
4.Demonstrate multilevel inheritance by creating a class GamingYouTuber that inherits from YouTuber and adds a method streamGame(gameName) which prints '[username] is now streaming [gameName] on [channelName]'.
*/

#include<iostream>
using namespace std;

class SocialMediaUser
{
protected:
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
protected:
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
protected:
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

class GamingYouTuber : public YouTuber
{
public:
    GamingYouTuber(string n, float f, string cn)
        :YouTuber(n, f,cn)
    {
        cout<<"GamingYouTuber constructor invoked"<<endl;
    }
    void streamGame(string gameName)
    {
        cout<<username<<" is now streaming "<<gameName<<" on "<<channelName<<endl;
    };

};

int main()
{
    GamingYouTuber gamingYt("Deepanshu Mainh",4000.00,"Gamer's Hut");
    gamingYt.streamGame("GTA V");

    return 0;
}
