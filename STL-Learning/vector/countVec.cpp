#include <iostream>
#include <vector>

int countEven(const std::vector<int>& vec)
{
    int count = 0;
    for (int num : vec)
    {
        if (num % 2 == 0)
            ++count;
    }
    return count;
}

int countOdd(const std::vector<int>& vec)
{
    int count = 0;
    for (int num : vec)
    {
        if (num % 2 != 0)
            ++count;
    }
    return count;
}


int main() 
{   
    // Initialize Vector
    std::vector<int> vec = {
        10, 7, 4, 3, 6, 1, 2
    };

    // get all even and odd numbers
    int even = countEven(vec);
    int odd = countOdd(vec);

    std::cout << "Even numbers: " << even << '\n';
    std::cout << "Odd numbers: " << odd << '\n';
    return 0;
}