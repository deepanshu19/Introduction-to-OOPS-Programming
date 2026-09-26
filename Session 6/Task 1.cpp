/*
1.Create a class called Song in your preferred OOP language with private properties title and artist. Add public getter and setter methods to access and modify these properties, then create an object and update its title.
*/

#include<iostream>
using namespace std;

class Song
{
private:
    string title;
    string artist;

public:
    void setTitle(string title)
    {
        this->title = title;
    }

    string getTitle()
    {
        return title;
    }

    void setArtist(string artist)
    {
        this->artist = artist;
    }

    string getArtist()
    {
        return artist;
    }
};

int main()
{
    Song s;
    s.setTitle("Humko dewana kar gaye!");
    s.setArtist("Himesh reshmiya");

    cout<<"Title of song is "<<s.getTitle()<<" and artist is "<<s.getArtist()<<endl;
    return 0;
}
