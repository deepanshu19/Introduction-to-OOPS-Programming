/*
2.Add a member function to your Playlist class named togglePublic() that switches isPublic between true and false each time it is called. Demonstrate by toggling the value twice and printing the result each time.
*/

#include<iostream>
using namespace std;

class Playlist
{
public:
    string name;
    string createdOn;
    bool isPublic;

   void togglePublic()
    {
        isPublic = !isPublic;
    }
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
    cout<<"=============================================="<<endl;
    play_1.togglePublic();
    cout<<"First togglePublic() function call:"<<endl;
    cout << "Is Public?: " << (play_1.isPublic ? "Yes" : "No") << endl;
    play_1.togglePublic();
    cout<<"Second togglePublic() function call:"<<endl;
    cout << "Is Public?: " << (play_1.isPublic ? "Yes" : "No") << endl;

    return 0;
}
