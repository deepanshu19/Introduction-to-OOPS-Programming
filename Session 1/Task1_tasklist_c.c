/*
1.Write a simple C program tasklist_c.c that allows you to add up to 5 tasks (as strings) to a global array and print all tasks using a for loop.
*/

#include<stdio.h>
#define MAX_TASKS 5

char tasks[MAX_TASKS][100];

int main()
{
    int i,taskNumber;

    //Add tasks
    for(i=0;i<MAX_TASKS;i++)
    {
        printf("Enter Task %d: ", i + 1);
        scanf(" %[^\n]", tasks[i]);
    }

    //Print all tasks
    printf("\n--- Task List ---\n");
    for (i = 0; i < MAX_TASKS; i++)
    {
        printf("%d. %s\n", i + 1, tasks[i]);
    }

    return 0;
}
