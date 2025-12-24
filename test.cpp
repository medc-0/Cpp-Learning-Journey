#include <iostream>
#include <vector>

int main() 
{
    std::vector<int> vec = {
        1, 2, 3, 4
    };

    for (int i = static_cast<int>(vec.size()) - 1; i >= 0; i--) 
    {
         std::cout << vec[i] << " ";
    }

    return 0;
}