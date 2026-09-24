/*
2.Build two classes, InstagramUploader and YouTubeUploader, each with a method uploadContent(). Both should extend a base class SocialMediaUploader and override uploadContent() to print a message showing how uploading works differently for Instagram and YouTube.
*/
#include <iostream>
using namespace std;


class SocialMediaUploader
{
public:
    void uploadContent(){
        cout<<"Social Media Content Uploaded"<<endl;
    }
};

class Instagram :public SocialMediaUploader
{
public:
    void uploadContent(){
        cout<<"Instagram Content Uploaded"<<endl;
    }
};

class YouTube :public SocialMediaUploader
{
public:
    void uploadContent() {
        cout<<"YouTube Content Uploaded"<<endl;
    }
};

int main()
{
    Instagram instagram;
    instagram.uploadContent();

    YouTube youtube;
    youtube.uploadContent();
    return 0;
}
