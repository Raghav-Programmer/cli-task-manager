#include "menu.hpp"
#include "taskOperations.hpp"
#include <iostream>

int main()
{
    do
    {
        menu();

        switch (ch)
        {
        case 'A':
            addTask();
            break;

        case 'B':
            deleteTask();
            break;

        case 'C':
            displayTasks();
            break;

        case 'D':
            return 0;

        default:
            std::cout << "Incorrect Choice!!" << std::endl;
        }
    } while (true);
}