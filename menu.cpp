#include "menu.hpp"
#include <iostream>
#include <cctype>
#include <limits>
#include <string>
#include <sstream>

char ch;

void menu()
{
    std::cout << '\n';
    std::cout << "************~OPTIONS~***************" << std::endl;
    std::cout << "**********A: Add Task***************" << std::endl;
    std::cout << "*********B: Delete Task*************" << std::endl;
    std::cout << "********C: Display Tasks************" << std::endl;
    std::cout << "************D: Exit*****************" << std::endl;
    std::cout << '\n';

    std::string choice;
    do
    {
        std::cout << "Enter choice: ";
        std::getline(std::cin, choice);
        std::stringstream ss(choice);
        ss >> ch;
        std::cout << '\n';
        if (ss.fail())
        {
            ss.clear();
            std::cout << '\n';
            std::cout << "Incorrect Choice!!" << std::endl;
            std::cout << '\n';
            continue;
        }
        else
        {
            ch = toupper(ch);
            break;
        }
    } while (true);
}