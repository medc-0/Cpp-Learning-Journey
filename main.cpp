#include <iostream>

struct Person {
    std::string name;
    int age;

    Person(const std::string& n, int a)
    : name(n), age(a) {}

    void printInfo() const {
        std::cout << "Name: " << name << " | Age: " << age << '\n';
    }
};

int main() {
    Person p("Bob", 20);
    p.printInfo();
    return 0;
}