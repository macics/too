// include/TodoList.h

#ifndef TODOLIST_H
#define TODOLIST_H

#include <vector>
#include <string>

class TodoList {
public:
    void addTask(const std::string& task);
    void deleteTask(int index);
    void displayTasks() const;

private:
    std::vector<std::string> tasks;
};

#endif // TODOLIST_H
