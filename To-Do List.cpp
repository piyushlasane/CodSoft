#include <iostream>
#include <string>
using namespace std;

const int maxTasks = 20;

struct Task
{
    string description;
    bool completed;
};

void addTask(Task tasks[], int &taskCount, const string &description)
{
    if (taskCount < maxTasks)
    {
        tasks[taskCount++] = {description, false};
        cout << "\nTask added successfully." << endl;

    }
    else
    {
        cout << "\nTask list is full." << endl;
    }
}

void viewTasks(const Task tasks[], int taskCount)
{
    cout << "\nYour Tasks : \n   [X] Indicates completed task" << endl;
    for (int i = 0; i < taskCount; ++i)
    {
        cout << i + 1 << ". [" << (tasks[i].completed ? "X" : " ")<< "] " << tasks[i].description << endl;
    }
}

void markTask(Task tasks[], int taskCount, int index)
{
    if (index >= 1 && index <= taskCount)
    {
        tasks[index - 1].completed = true;
        cout << "\nTask marked as completed." << endl;

    }
    else
    {
        cout << "\nInvalid task index" << endl;
    }
}

void removeTask(Task tasks[], int &taskCount, int index)
{
    if (index >= 1 && index <= taskCount)
    {
        for (int i = index - 1; i < taskCount - 1; ++i)
        {
            tasks[i] = tasks[i + 1];
        }
        --taskCount;
        cout << "\nTask removed successfully." << endl;
    }
    else
    {
        cout << "\nInvalid task index" << endl;
    }
}

int main()
{
    Task tasks[maxTasks];
    int taskCount = 0;
    int choice;
    string taskDescription;
    int taskIndex;

    while (true)
    {
        cout << "\n1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Mark Task as Completed" << endl;
        cout << "4. Remove Task" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the task: ";
            cin.ignore();
            getline(cin, taskDescription);
            addTask(tasks, taskCount, taskDescription);
            break;
        case 2:
            viewTasks(tasks, taskCount);
            break;
        case 3:
            cout << "Enter the index of the task to mark as completed: ";
            cin >> taskIndex;
            markTask(tasks, taskCount, taskIndex);
            break;
        case 4:
            cout << "Enter the index of the task to remove: ";
            cin >> taskIndex;
            removeTask(tasks, taskCount, taskIndex);
            break;
        case 5:
            return 0;
        default:
            cout << "Invalid choice" << endl;
        }
    }
    return 0;
}
