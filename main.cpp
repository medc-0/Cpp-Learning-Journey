#include <iostream>

int main()
{

    short int age, score;

    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "Enter your score: ";
    std::cin >> score;

    if (age < 18 && score >= 90)
    {
        std::cout << "Young genius!" << std::endl;
    }
    else if (age >= 18 && score >= 90)
    {
        std::cout << "Adult genius!" << std::endl;
    }
    else if (score <= 60)
    {
        std::cout << "FAILED!" << std::endl;
    }
    else
    {
        std::cout << "Keep trying\n";
    }

    return 0;
}