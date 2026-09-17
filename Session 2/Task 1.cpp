/*
1.Create a class called Playlist with properties: name (string), createdOn (date), and isPublic (boolean). Instantiate an object of Playlist and print all its properties.
*/

#include<iostream>
using namespace std;

class Playlist
{
public:
    string name;
    string createdOn;
    bool isPublic;
};

int main()
{
    Playlist play_1;

    play_1.name = "Romantic";
    play_1.createdOn = "17-09-2026";
    play_1.isPublic = false;

    cout<<"Playlist name:"<<play_1.name<<endl;
    cout<<"Created On:"<<play_1.createdOn<<endl;
    cout << "Is Public?: " << (play_1.isPublic ? "Yes" : "No") << endl;

    return 0;
}
