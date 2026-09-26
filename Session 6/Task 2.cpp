/*
2.Build a class called InstaStory with a protected property storyViews. Create a subclass called SponsoredStory that can access and display the storyViews value.
*/

#include<iostream>
using namespace std;

class InstaStory
{
protected:
    int storyViews;
};

class SponsoredStory : InstaStory
{
public:
    void setStoryViews(int storyViews)
    {
        this->storyViews = storyViews;
    }

    int getStoryViews()
    {
        return storyViews;
    }
};

int main()
{
    SponsoredStory sponsoredstory;

    sponsoredstory.setStoryViews(500);

    cout<<"Instagram story views are "<<sponsoredstory.getStoryViews()<<endl;
    return 0;
}

