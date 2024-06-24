// src/main.cpp

#include <iostream>
#include "TodoList.h"

int main() {
    TodoList todoList;
    int choice;
    std::string task;
    
    while (true) {
        std::cout << "1. Добавить задачу\n";
        std::cout << "2. Удалить задачу\n";
        std::cout << "3. Показать задачи\n";
        std::cout << "4. Выйти\n";
        std::cout << "Введите ваш выбор: ";
        std::cin >> choice;
        
        switch (choice) {
            case 1:
                std::cout << "Введите задачу: ";
                std::cin.ignore(); // Очистка буфера ввода
                std::getline(std::cin, task);
                todoList.addTask(task);
                break;
            case 2:
                std::cout << "Введите номер задачи для удаления: ";
                int index;
                std::cin >> index;
                todoList.deleteTask(index);
                break;
            case 3:
                todoList.displayTasks();
                break;
            case 4:
                return 0;
            default:
                std::cout << "Неверный выбор. Попробуйте еще раз.\n";
        }
    }
    
    return 0;
}
