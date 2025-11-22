#include <iostream>
#include <vector>

int main() {
    
    std::vector<int> points = {70, 98, 99, 87, 89};

    for (auto point : points) {
        std::cout << point << " ";
        std::cout << std::endl;
    }
    std::cout << std::endl;

    for (auto& point : points) {
        point += 10;
    }

    for (auto point : points) {
        std::cout << point << " ";
        std::cout << std::endl;
    }

    return 0;
}