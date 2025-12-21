#include <iostream>
#include <iomanip>

int main()
{
    const int DAYS_WEEK = 7;
    double temperatures[DAYS_WEEK];

    for (int i = 0; i < DAYS_WEEK; i++)
    {
        std::cout << "Enter a temperature for the day " << i + 1 << ": ";
        std::cin >> temperatures[i];
    }

    // Initialize min, max, sum
    double lowestTemp = temperatures[0];
    double highestTemp = temperatures[0];
    double sum = 0.0;

    for (int i = 0; i < sizeof(temperatures) / sizeof(temperatures[0]); i++)
    {
        sum += temperatures[i];
        std::cout << temperatures[i] << " ";

        // find the highest temp and lowest
        if (temperatures[i] > highestTemp)
        {
            highestTemp = temperatures[i];
        }
        if (temperatures[i] < lowestTemp)
        {
            lowestTemp = temperatures[i];
        }
    }
    double averageTemp = sum / DAYS_WEEK;

    // results
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "\nHighest temperature: " << highestTemp;
    std::cout << "\nLowest temperature: " << lowestTemp;
    std::cout << "\nAverage temperature: " << averageTemp << std::endl;
    return 0;
}