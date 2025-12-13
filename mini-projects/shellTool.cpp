#include <iostream>
#include <string>
#include <vector>

#include "colors.h"

class Shell 
{
    public:
        std::vector<std::string> commands = {"exit", "history"};
        std::vector<std::string> lastCommands;
};

int main() 
{   
    Shell shell;
    while (1) 
    {
        std::string input;
        std::cout << Color::GREEN << "$ " << Color::RESET;
        std::getline(std::cin >> std::ws, input);

        if (input == shell.commands[0]) break;
        if (input == shell.commands[1]) 
        {   
            for (int i = 0; i < shell.lastCommands.size(); i++) 
            {
                std::cout << i << ". " << shell.lastCommands[i] << '\n';
            }
        }

        shell.lastCommands.push_back(input);
        
        std::cout << Color::RED << input <<  Color::RESET <<'\n';
    }
    std::cout << Color::RED << "program exit -1" << Color::RESET <<'\n';
    return 0;
}