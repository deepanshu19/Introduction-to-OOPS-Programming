/*
3.Create a class Movie with a parameterized constructor and then use a copy constructor to duplicate a Movie object. Print both the original and copied movie details to show they are identical.
*/

#include <iostream>
using namespace std;

class Movie {
private:
    string title;
    int releaseYear;

public:
    Movie(string t, int y) {
        title = t;
        releaseYear = y;
    }


    void display() {
        cout << "Movie Title: " << title << endl;
        cout << "Release Year: " << releaseYear << endl;
    }
};

int main() {
    // Original object
    Movie movie1("Inception", 2010);

    // Copy object using copy constructor
    Movie movie2 = movie1;

    cout << "Original Movie Details:" << endl;
    movie1.display();

    cout << "\nCopied Movie Details:" << endl;
    movie2.display();

    return 0;
}
