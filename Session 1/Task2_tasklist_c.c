/*
2.Modify your tasklist_c.c to add a function markTaskDone(int index) that sets the selected task to 'DONE' in the array, then print the updated list.<br><br><em><strong>Hint:</strong> Use a separate status array or append ' - DONE' to the task string.</em>
*/

#include<stdio.h>
#define MAX_TASKS 5

char tasks[MAX_TASKS][100];
int status[MAX_TASKS] = {0}; // 0 = Pending, 1 = DONE

// Function to mark a task as done
void markTaskDone(int index)
{
    if(index>=0 && index<MAX_TASKS)
        status[index] = 1;
    else
        printf("Invalid task number!\n");
}

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

    printf("\nEnter task number to mark as DONE: ");
    scanf("%d", &taskNumber);

    markTaskDone(taskNumber - 1);

    printf("\nUpdated Task List:\n");

    for(i=0;i<MAX_TASKS;i++)
    {
        if (status[i] == 1)
        {
            printf("%d. %s [DONE]\n", i + 1, tasks[i]);
        }
        else
        {
            printf("%d. %s [PENDING]\n", i + 1, tasks[i]);
        }
    }

    return 0;
}
