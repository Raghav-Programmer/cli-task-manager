#ifndef TASK_HPP
#define TASK_HPP

#include <string>

struct DueDate
{
    int day;
    int month;
    int year;
};

enum class PriorityLevel
{
    HIGH,
    MEDIUM,
    LOW
};

class Task
{
public:
    Task(const std::string &name, const std::string &description, const PriorityLevel &priority_level, const DueDate &due_date);

    // getter functions
    std::string getName() const;
    std::string getDescription() const;
    PriorityLevel getPriorityLevel() const;
    DueDate getDueDate() const;

    // setter functions
    void setName(const std::string &name);
    void setDescription(const std::string &description);
    void setPriorityLevel(const PriorityLevel &priority_level);
    void setDueDate(const DueDate &due_date);

private:
    std::string name;
    std::string description;
    PriorityLevel priority_level;
    DueDate due_date;
};

#endif