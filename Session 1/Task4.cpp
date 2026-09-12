/*
4.Build a simple TaskList class/object that stores multiple Task objects and provides addTask(title), markTaskDone(index), and showTasks() methods. Demonstrate adding 3 tasks, marking one as done, and displaying all tasks with their statuses.
*/

#include <iostream>
using namespace std;

class Task
{
private:
    string title;
    bool isDone;

public:
    Task()
    {
        title = "";
        isDone = false;
    }

    Task(string t)
    {
        title = t;
        isDone = false;
    }

    void markDone()
    {
        isDone = true;
    }

    void display()
    {
        cout << title;

        if (isDone)
            cout << " [DONE]";
        else
            cout << " [PENDING]";

        cout << endl;
    }
};

class TaskList
{
private:
    Task tasks[10];
    int count;

public:
    TaskList()
    {
        count = 0;
    }

    void addTask(string title)
    {
        if (count < 10)
        {
            tasks[count] = Task(title);
            count++;
        }
    }

    void markTaskDone(int index)
    {
        if (index >= 0 && index < count)
        {
            tasks[index].markDone();
        }
        else
        {
            cout << "Invalid task number!" << endl;
        }
    }

    void showTasks()
    {
        cout << "\nTask List:\n";

        for (int i = 0; i < count; i++)
        {
            cout << i + 1 << ". ";
            tasks[i].display();
        }
    }
};

int main()
{
    TaskList myTasks;

    // Add 3 tasks
    myTasks.addTask("Complete C++ Assignment");
    myTasks.addTask("Study OOP Concepts");
    myTasks.addTask("Submit Project");

    // Mark second task as DONE
    myTasks.markTaskDone(1);

    // Display tasks
    myTasks.showTasks();

    return 0;
}
