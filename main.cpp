#include <iostream>
#include <vector>

int main() {

    std::vector<std::string> colors = {
            "blue", "red", "green"
    }; 

    for (auto color : colors) {
        std::cout << color << ", ";
    }
    std::cout << std::endl;

    colors.insert(colors.begin(), "purple");
    colors.insert(colors.begin() + 2, "grey");
    colors.insert(colors.end(), "lime");

    for (auto color : colors) {
        std::cout << color << ", ";
    }
    std::cout << std::endl;
    return 0;
}