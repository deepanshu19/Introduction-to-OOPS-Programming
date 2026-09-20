/*
1.Create a class called Playlist with a default constructor that sets the playlist name to 'My Favourites' and prints a welcome message when an object is created.
*/

#include<iostream>
using namespace std;

class Playlist
{
    private:
    string name;
    public:
    Playlist()
    {
        name = "My Favourites";
        cout<<"Hello User,Constructor Invoked"<<endl;
    }

    void display()
    {
        cout<<"Playlist name is:"<<name<<endl;
    }

};

int main()
{
    Playlist playlist;

    playlist.display();

    return 0;
}
