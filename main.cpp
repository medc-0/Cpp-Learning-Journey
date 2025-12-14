#include <iostream>
#include <vector>

int main() 
{
    std::vector<std::string> cities = {
        "Tokyo", "Paris", "New york", "London"
    };

    for (auto city : cities) 
    {
        std::cout << city << '\n';
    }

    std::cout << cities.size() << '\n';
    cities.clear();
    std::cout << cities.size() << '\n';

    if (cities.empty()) 
    {
        std::cout << "No cities left" << '\n';
    }

    return 0;
}