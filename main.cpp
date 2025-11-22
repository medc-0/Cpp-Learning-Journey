#include <iostream>
#include <vector>

int main() {

    std::vector<std::string> colors = {
        "red", "blue", "green"
    };

    for (auto color : colors) {
        std::cout << color << " ";
    }
    std::cout << std::endl;

    colors.insert(colors.begin(), "(dark red)");
    colors.insert(colors.begin() + 3, "(dark blue)");
    colors.insert(colors.end(), "(dark green)");

    for (auto color : colors) {
        std::cout << color << " ";
    }

    return 0;
}