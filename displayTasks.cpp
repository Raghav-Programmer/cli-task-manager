#include "taskOperations.hpp"
#include <iostream>
#include <string>

void displayTasks()
{
    if (task_list.empty())
    {
        std::cout << "No Tasks Scheduled!!" << std::endl;
    }
    else
    {
        // counter for task numbers
        int i = 1;

        for (const Task &task : task_list)
        {
            // priority array(enum to string)
            const std::string priority_arr[] = {"HIGH", "MEDIUM", "LOW"};

            // displaying task details
            std::cout << "TASK " << i << ": " << task.getName() << std::endl;
            std::cout << "--> " << task.getDescription() << std::endl;
            std::cout << "Due: " << task.getDueDate().day << "/" << task.getDueDate().month << "/" << task.getDueDate().year << std::endl;
            std::cout << priority_arr[(int)task.getPriorityLevel()] << " Priority" << std::endl;
            std::cout << '\n';

            i++;
        }
    }
}