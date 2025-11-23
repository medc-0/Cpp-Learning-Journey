#include <iostream>
#include <vector>

int main() 
{
    std::vector<std::string> animals = {
        "dog", "cat", "bird"
    };

    std::string animal1 = "lion";
    std::string animal2 = "eagle";
    std::string animal3 = "fish";

    animals.insert(animals.begin(), animal1);
    animals.insert(animals.begin() + 3, animal2);
    animals.insert(animals.end(), animal3);

    for (auto& animal : animals) {
        animal += " animal";
        std::cout << animal << ", ";
    }
    std::cout << std::endl;

    return 0;
}