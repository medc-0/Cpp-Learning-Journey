#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> spells = {
        "Fire", "ice", "Lightning"
    };

    for (auto spell : spells)
    {
        std::cout << spell << '\n';
    }

    spells.insert(spells.begin(), "Earth");
    spells.insert(spells.end(), "Wind");

    spells.erase(spells.begin() + 2);

    for (auto& spell : spells) 
    {
        spell += " spell";
    }

    for (auto spell : spells) 
    {
        std::cout << spell << '\n';
    }

    std::cout << "size: " << spells.size() << '\n';
    return 0;
}