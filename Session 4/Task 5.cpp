/*
5.Implement hierarchical inheritance by creating an InstagramInfluencer class that inherits from SocialMediaUser and adds a method postStory(storyTitle) which prints '[username] posted a new story: [storyTitle]'.<br><br><em><strong>Hint:</strong> Think about how SocialMediaUser is the parent for YouTuber, Podcaster, and InstagramInfluencer.</em>
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

class InstagramInfluencer: public SocialMediaUser
{
public:
    InstagramInfluencer(string n, float f):SocialMediaUser(n,f)
    {
        cout<<"InstagramInfluencer constructor invoked"<<endl;
    }

    void postStory(string storyTitle)
    {
        cout<<username<<" posted a new story: "<<storyTitle<<endl;
    }
};
int main()
{
    InstagramInfluencer instaInfluencer("Deepanshu.Mainh",5000);
    instaInfluencer.postStory("Trip to bali");

    return 0;
}
