#include <iostream>
#include <vector>

int main() 
{
    std::vector<int> highScores = {
        100, 200, 300, 400, 500
    };

    for (auto hScore : highScores )
    {
        std::cout << hScore << '\n';
    }

    highScores.clear();

    if (highScores.empty()) 
    {
        std::cout << "vector cleared adding new scores...\n";
    }

    highScores.push_back(500);
    highScores.push_back(600);
    highScores.push_back(700);

    for (auto score : highScores) 
    {
        std::cout << score << '\n';
    }

    std::cout << highScores.size() << '\n';
    return 0;
}