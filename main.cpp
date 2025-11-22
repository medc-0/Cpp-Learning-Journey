#include <iostream>
#include <vector>

int main() {

    std::vector<int> scores = {1, 2, 3, 4, 5, 6};

    for (auto score : scores) {
        std::cout << score << " ";
    }
    std::cout << std::endl;

    for (auto& score : scores) {
        score *= 3;
        std::cout << score << " ";
    }
        
    return 0;
}