#include <iostream>

int main() 
{
    int monthNum;

    std::cout << "Enter a number from (1-12): ";
    std::cin >> monthNum;

    switch(monthNum) 
    {
        case 1:
            std::cout << "It is Janurary!\n";
            break;
        case 2:
            std::cout << "It is feburary!\n";
            break;
        case 3:
            std::cout << "It is march!\n";
            break;
        case 4:
            std::cout << "It is april!\n";
            break;
        case 5:
            std::cout << "It is may!\n";
            break;
        case 6:
            std::cout << "It is june!\n";
            break;
        case 7:
            std::cout << "It is july!\n";
            break;
        case 8:
            std::cout << "It is august!\n";
            break;
        case 9:
            std::cout << "It is September!\n";
            break;
        case 10:
            std::cout << "It is October!\n";
            break;
        case 11:
            std::cout << "It is November!\n";
            break;
        case 12:
            std::cout << "It is December!\n";
            break;
        default:
            std::cout << "That is not a valid month!\n";
            break;
    }
    return 0;
}