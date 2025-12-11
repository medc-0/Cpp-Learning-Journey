#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include <fstream>

void printMenu() 
{
    std::cout << "------------------\n";
    std::cout << "| 1. Add task    |\n";
    std::cout << "| 2. View tasks  |\n";
    std::cout << "| 3. Remove task |\n";
    std::cout << "| 4. Exit        |\n";
    std::cout << "------------------\n";
}

void loadTasks(std::vector<std::string>& tasks) 
{
    std::ifstream file("tasks.txt");
    std::string line;
    if (file.is_open()) 
    {
        while (std::getline(file, line)) 
        {
            tasks.push_back(line);
        }
        file.close();
    } 
    else 
    {
        std::cerr << "Error loading file\n";
    }
}

void saveTasks(const std::vector<std::string>& tasks) 
{
    std::ofstream file("tasks.txt");
    if (!file.is_open()) return;
    for (auto& task : tasks) 
    {
        file << task << '\n';
    }
    file.close();
}

int main() 
{
    std::vector<std::string> tasks;
    loadTasks(tasks);
    int choice;
    bool running = true;

    std::cout << "--- Todo list ---\n";

    while (running) 
    {
        printMenu();
        std::cout << "Enter a choice (1-4): ";
        std::cin >> choice;

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if (choice == 1) 
        {
            std::string task;
            std::cout << "Enter new task: ";
            std::getline(std::cin, task);
            tasks.push_back(task);
            std::cout << "Added task: " << task << '\n'; 
            saveTasks(tasks);
        }
        else if (choice == 2) 
        {
            if (tasks.empty()) 
            {
                std::cout << "No tasks yet\n";
            }
            else {
                for (int i = 0; i < tasks.size(); i++) 
                {
                    std::cout << i << ". " << tasks[i] << '\n';
                }
            }
        }
        else if (choice == 3) 
        {
            int index;
            std::cout << "Enter task number to remove: ";
            std::cin >> index;

            if (index >= 0 && index < tasks.size())
            {   
                std::string removedTask = tasks[index];
                tasks.erase(tasks.begin() + index);
                std::cout << "Task Removed! " << '"' << removedTask << '"' << '\n';
                saveTasks(tasks);
            }
            else 
            {
                std::cout << "Invalid task number!\n";
            }
        }
        else if (choice == 4)
        {   
            std::cout << "--------------------\n";
            std::cout << "| Exiting console..|\n";
            std::cout << "--------------------\n";
            running = false;
        }
    }
    return 0;
}