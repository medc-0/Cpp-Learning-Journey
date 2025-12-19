#include <iostream>
#include <vector>

void multiplyVec(std::vector<double>& vec) 
{
    if (!vec.empty()) 
    {
        for (auto& val : vec) 
        {
            val *= 2;
        }
    }
}

int main() 
{
    // Initialize vector
    std::vector<double> vec = {
        1.5, 2.5, 3.5, 4.5, 5.5
    };

    // multiply all values inside by x2
    multiplyVec(vec);
    for (auto num : vec) 
    {
        std::cout << num << " ";
    }
    return 0;
}