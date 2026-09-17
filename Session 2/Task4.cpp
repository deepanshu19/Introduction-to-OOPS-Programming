/*
4.Extend your Playlist class to include a member function addSong(songTitle) that adds the song title to an array property called songs. Demonstrate by adding three song titles and displaying the updated songs list.<br><br><em><strong>Hint:</strong> Initialize songs as an empty array inside the constructor.</em>
*/

#include<iostream>
using namespace std;

class Playlist
{
private:
    int songsCount;
    string songs[100];
public:
    string name;
    string createdOn;
    bool isPublic;

    Playlist()
    {
        songsCount = 0;
    }

   void togglePublic()
    {
        isPublic = !isPublic;
    }

    void addSong(string name)
    {
        if(songsCount<100)
        {
            songs[songsCount] = name;
            songsCount++;
        }
    }

    void displaySong()
    {
        if(songsCount>0)
        {
            for(int i =0;i<songsCount;i++)
            {
                cout<<songs[i]<<endl;
            }
        }
        else{
            cout<<"Songs list is empty"<<endl;
        }
    }
};

int main()
{
    Playlist play_1;

    play_1.name = "Romantic";
    play_1.createdOn = "17-09-2026";
    play_1.isPublic = false;

    play_1.addSong("Believer");
    play_1.addSong("Shape of you");
    play_1.addSong("Levitating");

    play_1.addSong("Believer");
    play_1.addSong("Shape of you");
    play_1.addSong("Levitating");

    cout<<"Playlist name:"<<play_1.name<<endl;
    cout<<"Created On:"<<play_1.createdOn<<endl;
    cout << "Is Public?: " << (play_1.isPublic ? "Yes" : "No") << endl;

    play_1.displaySong();
    return 0;
}
