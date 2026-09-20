/*
5.Modify your Playlist class so that it auto-saves the playlist name to a file called autosave.txt when the object is destroyed, simulating an auto-save feature like Spotify.<br><br><em><strong>Hint:</strong> Write the file-saving code inside the destructor.</em>

*/

#include<iostream>
#include <fstream>
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

    ~Playlist()
    {
        ofstream file("autosave.txt");
        if(file.is_open())
        {
        file<<"Playlist Name: "<<name<<endl;
        file.close();
        cout<<"Auto-saving playlist to autosave.txt..."<<endl;
        }
        else{
            cout << "Unable to save playlist!" << endl;
        }
    }

};

int main()
{
    Playlist playlist;

    playlist.display();

    return 0;
}
