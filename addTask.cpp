#include "taskOperations.hpp"
#include <iostream>
#include <cctype>
#include <limits>
#include <string>
#include <sstream>

std::vector<Task> task_list;

// function to input task details and add them to task list
void addTask()
{
    std::string name;
    std::string description = "N/A";
    PriorityLevel priority_level;
    DueDate due_date;

    std::cout << "Enter Task Details:" << std::endl;

    // name of task
    do
    {
        std::cout << "Name: ";
        std::getline(std::cin, name);

        if (name.empty())
        {
            std::cout << '\n';
            std::cout << "Name Can't Be Empty!!" << std::endl;
            std::cout << '\n';
        }
    } while (name.empty());

    // description of task
    std::cout << "Description(N/A is Default Value): ";
    std::getline(std::cin, description);

    // priority of task
    std::string s;
    do
    {
        std::cout << "Priority Level(High | Medium | Low): ";
        std::getline(std::cin, s);

        if (s.empty())
        {
            std::cout << '\n';
            std::cout << "Priority Level Cannot Be Empty!!" << std::endl;
            std::cout << '\n';
            continue;
        }
        else
        {
            for (char &c : s)
            {
                c = toupper(c);
            }

            if (s == "HIGH")
            {
                priority_level = PriorityLevel::HIGH;
                break;
            }
            else if (s == "MEDIUM")
            {
                priority_level = PriorityLevel::MEDIUM;
                break;
            }
            else if (s == "LOW")
            {
                priority_level = PriorityLevel::LOW;
                break;
            }
            else
            {
                std::cout << '\n';
                std::cout << "Invalid Priority Level!!" << std::endl;
                std::cout << '\n';
                continue;
            }
        }
    } while (true);

    // due date of the task
    std::string date;
    do
    {
        std::cout << "Due Date(DD MM YYYY): ";
        std::getline(std::cin, date);
        std::stringstream ss(date);

        ss >> due_date.day >> due_date.month >> due_date.year;

        if (ss.fail())
        {
            ss.clear();
            std::cout << '\n';
            std::cout << "Invalid Date!!" << std::endl;
            std::cout << '\n';
            continue;
        }
        else
        {
            if (due_date.day < 1 || due_date.day > 31 || due_date.month < 1 || due_date.month > 12 || due_date.year < 1900 || due_date.year > 9998)
            {
                std::cout << '\n';
                std::cout << "Invalid Date!!" << std::endl;
                std::cout << '\n';
                continue;
            }
            else if ((due_date.month == 4 || due_date.month == 6 || due_date.month == 9 || due_date.month == 11) && due_date.day > 30)
            {
                std::cout << '\n';
                std::cout << "Invalid Day!!(Hint: Entered Month Only Has 30 Days!!)" << std::endl;
                std::cout << '\n';
                continue;
            }
            else if (due_date.month == 2 && (due_date.day > 29 || (due_date.year % 4 != 0 && due_date.day > 28)))
            {
                std::cout << '\n';
                std::cout << "Invalid Day!!(Hint: Entered Month Is Feb!!)" << std::endl;
                std::cout << '\n';
                continue;
            }
            else
            {
                break;
            }
        }
    } while (true);

    // adding task to list
    Task task(name, description, priority_level, due_date);
    task_list.push_back(task);
    std::cout << '\n';
    std::cout << "Task Added Successfully!!" << std::endl;
}
