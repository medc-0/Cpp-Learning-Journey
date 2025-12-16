#include <iostream>
#include <vector>
#include <string>

int main() 
{
    std::vector<int> numbers;
    int count = 0;
    while (count != 8) 
    {
        int num;
        std::cout << "Enter a number: ";
        std::cin >> num;
        numbers.push_back(num);
        count++;
    }

    for (int i = 0; i < numbers.size(); i++) 
    {
        std::cout << numbers[i] << " ";
    }
    std::cout << '\n';

    for (int i = numbers.size() -1; i >= 0; i--) 
    {
        std::cout << numbers[i] << " ";
    }
    std::cout << '\n';
    return 0;
}