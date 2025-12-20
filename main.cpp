#include <iostream>
#include <vector>
#include <string>

int main() 
{
    std::vector<std::string> items = {
        "Sword", "shield", "potion"
    };
    std::vector<std::string> itemStats;
    int itemNumber;

    std::cout << "Pick a number from 1-3(4 to exit): ";
    std::cin >> itemNumber;

    switch(itemNumber) 
    {
        case 1:
            std::cout << items.at(0) << " +10 damage!\n";
            itemStats.push_back("Sword +10 damage!");
            break;
        case 2:
            std::cout << items.at(1) <<" defense +10!\n";
            itemStats.push_back("Shield defense +10!");
            break;
        case 3:
            std::cout << items.at(2) << " heals +50hp!\n";
            itemStats.push_back("Potion heals +50hp");
            break;
        case 4:
            std::cout << "Exiting program..\n";
            break;
            return EXIT_SUCCESS;
        default:
            std::cout << "Pick a valid item number!\n";
            break;
    }

    for (auto item : items) 
    {
        std::cout << item << '\n';
    }
    return 0;
}