#include <iostream>
#include <vector>
#include <string>
#include <limits>

void printMenu() 
{
    std::cout << "------------------\n";
    std::cout << "| 1. Add task    |\n";
    std::cout << "| 2. View tasks  |\n";
    std::cout << "| 3. Remove task |\n";
    std::cout << "| 4. Exit        |\n";
    std::cout << "------------------\n";
}

int main() 
{
    std::vector<std::string> tasks;
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
            std::cout << "Added task << " << task << '\n'; 
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
                std::cout << "Task Removed! " << '"' << removedTask << '"\n';
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