#include <iostream>
#include <vector>

int main() 
{
    std::vector<int> scores = {
        10, 20, 30, 40, 50
    };

    for (auto score : scores) 
    {
        std::cout << score << '\n';
    }

    std::cout << "size: "<< scores.size() << '\n';
    scores.clear();
    
    if (scores.empty()) 
    {
        std::cout << "no more scores left.\n";
    }

    return 0;
}