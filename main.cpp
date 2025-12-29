#include <iostream>

struct Person {
    std::string name;
    int age;
};

int main()
{
    Person person;
    person.name = "John Doe";
    person.age = 30;

    std::cout << "Name: " << person.name << '\n';
    std::cout << "Age: " << person.age << '\n';
    return 0;
}