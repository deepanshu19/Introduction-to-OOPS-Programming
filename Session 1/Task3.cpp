/*
3.Create a Task class in your favorite OOP language (Java, Python, or C++) with properties: title and isDone. Add a method markDone() that sets isDone to true, and a method display() that prints the task with its status.
*/
#include <iostream>
using namespace std;

class Task
{
private:
    string title;
    bool isDone;

public:
    // Constructor
    Task(string t)
    {
        title = t;
        isDone = false;
    }

    //Mark task as done
    void markDone()
    {
        isDone = true;
    }

    // Display task details
    void display()
    {
        cout<<"Task: "<<title;

        if(isDone)
            cout<<" [DONE]"<<endl;
        else
            cout<<" [PENDING]"<<endl;
    }

};

int main()
{
    Task task1("Complete C++ Assignment");

    cout << "Before marking done:"<<endl;
    task1.display();

    task1.markDone();

    cout << "\nAfter marking done:" << endl;
    task1.display();

    return 0;

}
