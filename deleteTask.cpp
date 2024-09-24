#include "taskOperations.hpp"
#include <iostream>
#include <limits>

void deleteTask()
{
    do
    {
        if (task_list.empty())
        {
            std::cout << "No Tasks Scheduled!!" << std::endl;
            break;
        }

        else
        {
            displayTasks();

            int num;
            std::cout << "Enter Task Number To Delete: ";
            std::cin >> num;
            std::cin.ignore();
            if (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << '\n';
                std::cout << "Invalid Task Number!!" << std::endl;
                std::cout << '\n';
                continue;
            }
            else if (num > task_list.size() || num < 1)
            {
                std::cout << '\n';
                std::cout << "Invalid Task Number!!" << std::endl;
                std::cout << '\n';
                continue;
            }
            else
            {
                task_list.erase(task_list.begin() + (num - 1));
                std::cout << '\n';
                std::cout << "Task Deleted Successfully!!" << std::endl;
                break;
            }
        }
    } while (true);
}