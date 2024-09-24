#ifndef TASK_OPERATIONS_HPP
#define TASK_OPERATIONS_HPP

#include "task.hpp"
#include <vector>

// for adding tasks
extern std::vector<Task> task_list;
void addTask();

// for displaying tasks
void displayTasks();

// for deleting tasks
void deleteTask();

#endif