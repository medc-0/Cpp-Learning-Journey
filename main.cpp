#include <iostream>

void foo(int* val1, int* val2) {
    *val1 += 10;
    *val2 *= 2;
}

int main() {
    int value1 = 0;
    int value2 = 5;

    std::cout << "Values before modification: " << value1 << " " << value2 << '\n';
    foo(&value1, &value2);
    std::cout << "Values after modification: " << value1 << " " << value2 << '\n';
    return 0;
}