#include <iostream>
#include <vector>

int main() 
{
    std::vector<int> scores = {
        85, 92, 78, 90, 66
    };

    for (auto score : scores) 
    {
        std::cout << score << '\n';
    }

    if (scores.front() > 90) 
    {
        std::cout << "Amazing start!" << '\n';
    }
    else if (scores.front() > 80 && scores.front() < 90) 
    {
        std::cout << "Good start!" << '\n';
    }
    else 
    {
        std::cout << "Needs improvement!" << '\n';
    }

    if (scores.back() < 70) {
        std::cout << "last score is low!" << '\n';
    }
    else 
    {
        std::cout << "last score is fine!" << '\n';
    }

    scores.push_back(100);
    scores.erase(scores.begin() + 1);

    for (auto score : scores) 
    {
        std::cout << score << '\n';
    }

    std::cout << "Size: " << scores.size() << '\n';
    std::cout << "Capacity: " << scores.capacity() << '\n';
    return 0;
}