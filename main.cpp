#include <iostream>
#include <vector>

int main() {
    double* temp1 = new double(23.5);
    double* temp2 = new double(28.2);
    double* temp3 = new double(19.8);
    double* temp4 = new double(31.0);
    double* temp5 = new double(26.7);

    std::vector<double*> temperatures;
    temperatures.push_back(temp1);
    temperatures.push_back(temp2);
    temperatures.push_back(temp3);
    temperatures.push_back(temp4);
    temperatures.push_back(temp5);

    for (double* t : temperatures) {
        std::cout << "Temperature C: " << *t << '\n';
    }

    double* largestVal = temperatures[0];
    double total = 0.0;
    for (double* t : temperatures) {
        total += *t;
        if (*t > *largestVal) {
            largestVal = t;
        }
    }
    std::cout << *largestVal << '\n';
    double average = total / temperatures.size();
    std::cout << "average: " << average << '\n';
    
    for (double*& t : temperatures) {
        delete t;
        t = nullptr;
    }
    temperatures.clear();
    return 0;
}