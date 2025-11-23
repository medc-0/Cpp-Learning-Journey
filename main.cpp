#include <iostream>
#include <vector>

int main()
{
    std::vector<int> scores = {10, 20, 30, 40, 50, 60};

    for (auto score : scores) {
        std::cout << score << ", ";
    }
    std::cout << std::endl;

    scores.insert(scores.begin(), 0);
    scores.insert(scores.begin() + 3, 25);
    scores.insert(scores.end(), 70);

    for (auto score : scores) {
        std::cout << score << ", ";
    }
    std::cout << std::endl;
    return 0;
}