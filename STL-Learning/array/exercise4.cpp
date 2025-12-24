/*
Exercise 4 – Row-wise processing

For each row:

Print how many elements it has

Print the row index
*/

#include <iostream>

int main()
{
    constexpr int ROW = 3;
    constexpr int COL = 4;

    int arr[ROW][COL] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    for (int row = 0; row < ROW; row++)
    {
        // print the amount of cols the row has
        std::cout << "Row " << row << " has " << COL << " elements: ";

        // loop through each column in the current row
        for (int col = 0; col < COL; col++)
        {
            std::cout << arr[row][col] << " ";
        }
        std::cout << '\n';
    }
    return 0;
}