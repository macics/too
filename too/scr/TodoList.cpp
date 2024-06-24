// src/TodoList.cpp

#include "TodoList.h"
#include <iostream>

void TodoList::addTask(const std::string& task) {
    tasks.push_back(task);
}

void TodoList::deleteTask(int index) {
    if (index < 1 || index > tasks.size()) {
        std::cout << "Неверный номер задачи.\n";
    } else {
        tasks.erase(tasks.begin() + index - 1);
        std::cout << "Задача удалена.\n";
    }
}

void TodoList::displayTasks() const {
    if (tasks.empty()) {
        std::cout << "Нет задач для отображения.\n";
    } else {
        for (size_t i = 0; i < tasks.size(); ++i) {
            std::cout << i + 1 << ". " << tasks[i] << '\n';
        }
    }
}
