#include "task.hpp"

// constructor for task
Task::Task(const std::string &name, const std::string &description, const PriorityLevel &priority_level, const DueDate &due_date)
    : name(name), description(description), priority_level(priority_level), due_date(due_date) {}

// getter functions
std::string Task::getName() const
{
    return name;
}
std::string Task::getDescription() const
{
    return description;
}
PriorityLevel Task::getPriorityLevel() const
{
    return priority_level;
}
DueDate Task::getDueDate() const
{
    return due_date;
}

// setter functions
void Task::setName(const std::string &name)
{
    this->name = name;
}
void Task::setDescription(const std::string &description)
{
    this->description = description;
}
void Task::setPriorityLevel(const PriorityLevel &priority_level)
{
    this->priority_level = priority_level;
}
void Task::setDueDate(const DueDate &due_date)
{
    this->due_date = due_date;
}