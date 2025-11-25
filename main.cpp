#include <iostream>

int main() {

    // int arr[3] = {1, 2, 3};
    int num1 = 10;
    int num2 = 0;

    try {   
        int res = num1 / num2;
        throw 505;
    } catch (int errorCode) {
        std::cout << "error" << errorCode <<'\n';
    }

    return 0;
}