#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
// template <typename T>

// Namespaces with scopes using the :: Operator known as the scope resolution operator
namespace first
{
    int x = 1;
}
/*
namespace second {
    int x = 2;
}
*/

struct student {
    std::string name;
    double gpa;
    bool enrolled;
};

enum Day {
    monday = 1,
    tuesday = 2,
    wednesday = 3,
    thursday = 4,
    friday = 5,
    saturday = 6,
    sunday = 7
};

enum CardinalDirections {
    NORTH = 1,
    EAST = 2,
    WEST = 3,
    SOUTH = 4,
};

enum Flavor { // Implicit value is assigned! from 0-x
    vanilla, // 0
    chocolate, // 1
    strawberry, // 2
    mint // 3
};

enum Levels {
    EASY = 1, // 1
    NORMAL = 2, // 2
    HARD = 3 // 3
};

class Human {
    public:
        std::string name;
        std::string occupation;
        int age;
        int points = 100; // non assigned attributes sort-of like clones

        void eat() {
            std::cout << "This person is eating!" << '\n';
        }

        void drink() {
            std::cout << "This person is drinking!" << '\n';
        }

        void sleep() {
            std::cout << "This person is sleeping!" << '\n';
        }
};
class Car {
    public:
        std::string make;
        std::string color = "black";
        int year;

        void accelerate() {
            std::cout << "The " <<  this->color << " " << this->make << " is accelerating!\n";
        }

        void brake() {
            std::cout << "The " <<  this->color << " " << this->make << " is braking!\n";
        }
};

class Student {
    public:
        std::string name;
        int age;
        double gpa;

    Student(std::string name, int age, double gpa) {
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};

class Pizza {
    public:
        std::string topping1;
        std::string topping2;
        
    Pizza(std::string topping1) {
        this->topping1 = topping1;
    }
    Pizza(std::string topping1, std::string topping2) {
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
};

class Stove {
    private:
        int temperature = 0;

    public:

        Stove(int temperature) {
            setTemperature(temperature);
        }

        int getTemperature() {
            return temperature;
        }
        void setTemperature(int temperature) {
            if (temperature < 0) {
                this->temperature = 0;
            }
            else if (temperature >= 10) {
                this->temperature = 10;
            }
            else {
                this->temperature = temperature;
            }
        }
};

class Animal {
    public:
        bool alive = true;
    
    void eat() {
        std::cout << " Animal is eating\n";
    }
};

class Dog : public Animal {
    public:
        std::string race;

    void bark() {
        std::cout << "the dog is barking\n";
    }
};

class Cat : public Animal {
    public:
        
    void meow() {
       std::cout << "The cat is meowing!\n";
    }

};

class Shape {
    public:
        int corners;
        int sides;
        std::string color;

    void introduce() {
        std::cout << "I'm a shape and I have " << this->corners << " corners and " << this->sides << " sides! I am also " << this->color << " Coloured!\n";
    }
};

class Cube : public Shape {
    public:
        int edges;

    void displayValues() {
        std::cout << edges << '\n';
        std::cout << sides << '\n';
        std::cout << corners << '\n';
    }
};

class Sphere : public Shape {
    public:
        int weight;

    void displayWeight() {
        std::cout << weight << '\n';
    }
};


//  Typedef: Example for a very long data type and to reduce writing this everytime we can use a typedef (type-definition)
/*
typedef std::vector<std::pair<std::string, int>> pairlist_tp;
typedef std::string text_tp;
typedef int num_tp;
*/
using pairlist_t = std::vector<std::pair<std::string, int>>;
using text_t = std::string;
using num_t = int;

/*
void _func1();
void _func2(std::string func__);
double calculateSquare(double x);
std::string conncatonateString(std::string string1, std::string string2);
void sort(int array[], int size);
void swap(std::string &x, std::string &y);
void printInfo(const std::string name, const int age);
*/

// T max(T x, T y) {
//     return (x > y) ? x : y;
// }

int main() {
    
    /*
    using std::cout;
    using std::string;

    const double PI = 3.1459;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;


    std::string name = "med";

    cout << "Hello, " << name;
    */

    // typedef = resolved to create an additional name
    //           (alias) for another data type.
    //           New identifier for an existing type
    //           Helps with readablity and reduces typos
    //           Use when there is a clear benefit
    //           Replaced with 'using' (work better w/ templates)

    /*
    std::vector<std::pair<std::string, int>> pairlist = {"hello", 1};
    pairlist_t pairlist = {"hello", 2};

    text_t firstname = "firstname";
    text_t lastname = "Lastname";
    num_t age = 20;

    std::cout << "Hello, " << firstname + " " + lastname << "\n";
    std::cout << "You are: " << age << " years old" << "\n";
    */

    // arithmetic operators = return the result of a specific
    //                        arithmetic operation (+, -, *, /, %)

    /*
    int students = 20;

    students = students + 1;
    students += 1;
    students++; (Incrementation often used within loops)

    students = students - 1;
    students -= 1;
    students--; (Decrementation operator)

    students = students * 2;
    students *= 2;

    students = students / 2;
    students /= 2;

    int remainder = students % 2;

    // parenthesis
    // multiplication & Division
    // addition & subtraction

    std::cout << "Students: " << students;
    */

    // type conversion = conversion a value of one data type to another
    //                   Implicit = automatic
    //                   Explicit = Precede value with new data type (int)

    /*
    double x = (int)3.14;

    char c = 100;

    std::cout << c;

    std::cout << (char)100; // returns letter 'd' in ascii

    int correct = 8;
    int questions = 10;
    double score = correct / (double)questions * 100;

    std::cout << score << "%";
    */

    // cout << (insertion operator)
    // cin >> (extraction operator)

    /*
    std::string name;
    int age;

    std::cout << "Whats your name: ";
    std::cin >> name;

    std::cout << "Whats your full-name?: " << "\n";
    std::getline(std::cin >> std::ws, name);

    std::cout << "Whats your age: ";
    std::cin >> age;

    std::cout << "Your name: " << name << "\n";
    std::cout << "You are " << age << " Years old" << "\n";
    */

    // Useful Math Related functions = Showcase of very useful math-related
    //                                 Functions in C++.

    /*
    double x = 3.23;
    double y = 4;
    double z;

    z = std::max(x, y);
    z = std::min(x, y);
    z = pow(2, 4);
    z = sqrt(36);
    z = abs(-5);
    z = round(x);
    z = ceil(x);
    z = floor(x);
    z = tan(x);
    z = log(20);

    std::cout << z;
    */

    // Calculate = the hypotenuse of a right triangle
    //             Practice program.

    /*
    double kat1 = 5.24;
    double kat2 = 8.25;
    double hypotenuse;

    hypotenuse = sqrt(pow(kat1, 2) + pow(kat2, 2));

    std::cout << "The side hypotenuse: " << hypotenuse << "cm" << "\n";
    */

    // if statements = do something if a condition is true
    //                 if not, then don't do it.

    /*
    bool forSale = true;
    double money = 30.73;
    double price = 19.99;

    if (forSale) {
        if (price < money) {
            std::cout << "You bought the item!" << "\n";
        } else {
            std::cout << "You don't have enough money to buy the item." << "\n";
        }
    } else {
        std::cout << "Item is not for sale." << "\n";
    }

    int age = 18;

    if (age < 18) {
        std::cout << "You can't enter." << "\n";
    }
    else {
        std::cout << "You can enter." << "\n";
    }
    */

    // switch = alternative to using many "else if" statements
    //          compare one value to matching cases.

    /*
    int day = 2;

    switch (day)
    {
    case 1:
        std::cout << "today is monday!" << "\n";
        break;
    case 2:
        std::cout << "today is tuesday!" << "\n";
        break;
    case 3:
        std::cout << "today is wednesday!" << "\n";
        break;
    case 4:
        std::cout << "today is thursday!" << "\n";
        break;
    case 5:
        std::cout << "today is friday!" << "\n";
        break;
    case 6:
        std::cout << "today is saturday!" << "\n";
        break;
    case 7:
        std::cout << "today is sunday!" << "\n";
        break;
    default:
        std::cout << "this is not a day!" << "\n";
        break;
    }
    */

    // Calculator program = simplified version
    //                      Runs in the console.

    /*
    char op;
    double num1;
    double num2;
    double res;

    std::cout << "************* CALCULATOR **************\n";

    op = '+';

    num1 = 5.5;
    num2 = 3.4;

    switch(op) {
        case '+':
            res = num1 + num2;
            std::cout << "Result: " << res << "\n";
            break;
        case '-':
            res = num1 - num2;
            std::cout << "Result: " << res << "\n";
            break;
        case '*':
            res = num1 * num2;
            std::cout << "Result: " << res << "\n";
            break;
        case '/':
            res = num1 / num2;
            std::cout << "Result: " << res << "\n";
            break;
        default:
            std::cout << "not an available operator!" << "\n";
            break;
    }

    std::cout << "****************************************";
    */

    // ternary operator ?: = replacement to an if/else statement
    // condition ? expression1 : expression2

    /*
    int points = 10;

    points > 9 ? std::cout << "You have passed!\n" : std::cout << "You did NOT pass!\n";

    int number = 37;

    number % 2 == 0 ? std::cout << "number is even\n" : std::cout << "number is odd\n";
    */

    // Useful string methods = in c++ for various situations.

    /*
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    name.length();
    if(name.length() > 12) {
        std::cout << "\nname cant be longer than 12 characters.";
    } else {
        std::cout << "Welcome, " << name << "\n";
    }

    name.empty();
    if (name.empty()) {
        std::cout << "you did not enter your name!" << "\n";
    } else {
        std::cout << "you did enter something.\n";
    }

    name.clear();
    name.append("@gmail.com");
    name.at(0);
    name.insert(0, "#");
    name.find(' ');
    name.erase(0, 3);
    */

    // while loops = run this code aslong as
    //               the condition remains true.

    /*
    int wnum1 = 1;

    while(wnum1 <= 10) {
        std::cout << wnum1 << "\n";
        wnum1++;
    }
    */

    // for loop = run a block of code a certain
    //            amount of times.

    /*
    for (int i = 0; i<=5;i++) {
        std::cout << i << "\n";
    }
    */

    // nested loops = a loop inside of another loop
    //                mostly used in datastructures

    /*
    int rows = 4;
    int columns = 6;
    char symbol = '#';

    for (int i = 0; i <= rows; i++) {
        for (int j = 0; j <= columns; j++) {
            std::cout << symbol << " ";
        }
        std::cout << "\n";
    }
    */

    // pseduo-random = NOT truly random (but close)

    /*
    srand(time(NULL));

    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 12) + 1;
    int num3 = (rand() % 20) + 1;

    std::cout << num1 << "\n";
    std::cout << num2 << "\n";
    std::cout << num3 << "\n";
    */

    // functions = a block of re-useable code

    /*
    std::string func__ = "function";

    _func1();
    _func2(func__);
    */

    // return = return a value back to the spot
    //          where you called the encompassing function.

    /*
    double x = 5.0;
    std::cout << "the square is: " << calculateSquare(x) << "cm";

    std::string first_name = "med";
    std::string last_name = "lar";
    std::string fullName = conncatonateString(first_name, last_name);

    std::cout << "hello, " << fullName << "\n";
    */

    // array = a data structure that can hold multiple values
    //         values are accessed by an index number
    //         "kind of like a variable that holds multiple values"

    /*
    double prices[] = {(double)5.44, (double)2,14, (double)8.12};
    std::string cars[] = {(std::string)"BMW", (std::string)"Mercedes", (std::string)"Camero", (std::string)"Leopard"};
    int points[] = {};

    points[0] = 20;
    points[1] = 63;
    points[2] = 89;
    points[3] = 99;

    std::cout << "Cars: " << cars << '\n';
    std::cout << "prices: " << prices << '\n';
    std::cout << "points: " << points[0] << ", " << points[1] << ", " << points[2] << ", " << points[3] << '\n';
    */

    // sizeof() = determines the size in bytes of a:
    //            variable, data type, class, object, etc.

    /*
    double gpa = 2.5;
    std::string text = "med";
    char grade = 'A';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    std::string students[] = {"spongebob", "bob", "patrick"};


    std::cout << sizeof(std::string) << " bytes\n";
    std::cout << sizeof(int) << " bytes\n";
    std::cout << sizeof(double) << " bytes\n";
    std::cout << sizeof(float) << " bytes\n";
    std::cout << sizeof(char) << " bytes\n";
    std::cout << sizeof(long) << " bytes\n";
    std::cout << sizeof(bool) << " bytes\n";
    std::cout << sizeof(gpa) << " bytes\n";
    std::cout << sizeof(text) << " bytes\n";
    std::cout << sizeof(grade) << " bytes\n";
    std::cout << sizeof(student) << " bytes\n";
    std::cout << sizeof(grades) << " bytes\n";
    std::cout << sizeof(grades)/sizeof(char) << " elements\n";
    std::cout << sizeof(students)/sizeof(students[0]) << " elements\n";
    */

    // iterate over an array

    /*
    std::string students[] = {"spongebob", "patrick", "squidward"};
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    int grades1[] = {65, 72, 81, 93};

    for (int i = 0; i < 3; i++) {
        std::cout << students[i] << '\n';
    }

    for (int i = 0; i < sizeof(students)/sizeof(std::string); i++) {
        std::cout << students[i] << '\n';
    }

    for (int i = 0; i < sizeof(grades)/sizeof(grades[0]); i++) {
        std::cout << grades[i] << '\n';
    }

    std::cout << students[0] << '\n';

    // foreach loop = loop that eases the traversal over an
    //                iterable data set

    for (auto student : students) {
        std::cout << student << '\n';
    }

    for (int grade : grades1) {
        std::cout << grade << '\n';
    }
    */

    // sort an array = bubble sorting method
    //                 check the index to the right

    /*
    int array[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);

    for (auto element : array) {
        std::cout << element << " ";
    }
    */

    // fill() = Fills a range of elements with a specified value
    //          fill(start, end, value);

    /*
    const int SIZE = 100;
    std::string fruits[SIZE];

    fill(fruits, fruits + SIZE, "mango");

    for (auto fruit : fruits)
    {
        std::cout << fruit << '\n';
    }
    */

    // memory address = a location in memory where data is stored
    // a memory address can accessed with & (address-of operator)

    /*
    std::string name = "Med";
    int age = 20;
    bool student = true;

    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &student << '\n';
    */


    // pass by value = copies are created and their values are changed
    //                 the original variable remains the same value
    // pass by refernce = we get access to the memory address and change
    //                    the address so that the original value changes.

    /*
    std::string x = "water";
    std::string y = "Lemonade";

    swap(x, y);

    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';
    */

    // const parameter = parameter that is effectively read-only
    //                   code is more secure & conveys intent
    //                   useful for refernces and pointers

    /*
    std::string name = "Med";
    int age = 21;

    printInfo(name, age);
    */

    // pointer = variable that stores a memory address of another variable
    //           sometimes it's easier to work with an address

    // & address-of operator
    // * dereference operator

    /*
    std::string name5 = "Bob";
    std::string freeValue[5] = {"value1", "value2", "value3", "value4", "value5"};
    int age5 = 22;

    int *pAge = &age5;
    std::string *pName = &name5;
    std::string *pFreeValue = freeValue;

    std::cout << pName << '\n';
    std::cout << *pName << '\n';
    std::cout << pAge << '\n';
    std::cout << *pAge << '\n';
    std::cout << freeValue << '\n';
    std::cout << *pFreeValue << '\n';
    */

    // Null value = a special value that means something has no value.
    //              When a pointer is holding a null value,
    //              that pointer is not pointing at anything (null pointer)

    // nullptr = keyword represents a null literal

    // nullptrs are helpful when determining if an address
    // was successfully assigned to value.

    /*
    int* pointer = nullptr;
    int x = 123;

    pointer = &x;

    if (pointer == nullptr) {
        std::cout << "address was not assigned" << '\n';
    }
    else {
        std::cout << "address was assigned\n";
        std::cout << *pointer << '\n';
    }
    */

    // struct = A structure that group related variables under one name
    //          structs can contain many different datatypes (strings, ints, etc)
    //          variables in a struct are known as "members"
    //          member can be access with . "Class Member operation"

    student student1;
    student1.name = "Med";
    student1.gpa = 4.0;
    student1.enrolled = true;

    student student2;
    student2.name = "Bob";
    student2.gpa = 3.2;
    student2.enrolled = false;

    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';

    std::cout << student2.name << '\n';
    std::cout << student2.gpa << '\n';
    std::cout << student2.enrolled << '\n';

    // enums = a user-defined data type that consists
    //         of paired name-integer constants.
    //         GREAT if you have a set of potential options

    Levels currentLevel = EASY;
    Day currentDay = friday;
    CardinalDirections direction = WEST;
    Flavor currentFlavor = chocolate;

    std::cout << currentDay << '\n';
    std::cout << direction << '\n';
    std::cout << currentFlavor << '\n';

    // object = A collection of attributes and methods
    //          They can have characteristics and could perform actions
    //          Can be used to mimic real world items (ex. Phone, Book, Dog)
    //          Created from a class which acts as a "blue-print".

    Human human1;

    human1.name = "Bob";
    human1.occupation = "Programmer";
    human1.age = 30;

    human1.eat();
    human1.drink();
    human1.sleep();

    Car car1;
    car1.make = "Mercedes";
    car1.year = 2025;

    Car car2;
    car2.make = "Mustang";
    car2.color = "white";
    car2.year = 2024;

    car1.accelerate();
    car1.brake();
    car2.accelerate();
    car2.brake();

    // constructor = special method that is automatically called when an object is instantiated
    //               useful for assigning values to attributes as arguments

    Student student3("Spongebob", 25, 3.2);
    Student student4("Patrick", 23, 2.0);

    std::cout << student3.name << '\n';
    std::cout << student3.age << '\n';
    std::cout << student3.gpa << '\n';

    // overloaded constructors = instantiate multiple constructors
    //            in the same class with the same name for different objects.

    Pizza pizza1("pepperoni");
    Pizza pizza2("Mushrooms", "peppers");

    std::cout << pizza1.topping1 << '\n';
    std::cout << pizza2.topping1 << " " << pizza2.topping2<< '\n';

    // Abstraction = hiding unnecessary data from outside a class
    // getter = function that makes a private attribute READABLE
    // setter = function that makes a private attribute WRITEABLE

    Stove stove(4);

    stove.setTemperature(7);
    std::cout << "the temperature setting is: " << stove.getTemperature();

    // inheritance = A class can receive attributes and methods from another class
    //               Children classes inherit from Parent class
    //               Helps to reuse similar code found within multiple classes

    Dog dog;
    Cat cat;

    cat.meow();
    cat.eat();

    dog.bark();
    dog.eat();

    Cube cube;

    cube.edges = 12;
    cube.corners = 8;
    cube.sides = 6;
    cube.color = "red";

    cube.introduce();
    cube.displayValues();

    Sphere sphere;

    sphere.color = "yellow!";
    sphere.corners = 0;
    sphere.sides = 1;
    sphere.weight = 3;
    sphere.introduce();
    sphere.displayWeight();

    // dynamic memory = Memory that is allocated after the program
    //                  is already compiled & running.
    //                  Use the 'new' operator to allocate
    //                  memory in the heap rather than the stack

    //                  Useful when we don't know how much memory
    //                  we will need. Makes our programs more flexible,
    //                  especially when accepting user input.

    int* pNum = nullptr;
    pNum = new int;

    *pNum = 21;

    std::cout << "address: " << pNum << '\n';
    std::cout << "value: " << *pNum << '\n';

    delete pNum; // delete "pNum" to free up space otherwise we risk a memory leak

    char* pGrades = nullptr;
    int size;

    std::cout << "How many grades to enter in?: " << '\n';
    std::cin >> size;

    pGrades = new char[5];

    for (int i = 0; i < size; i++) {
        std::cout << "Enter grade #" << i + 1 << ": " << '\n';
        std::cin >> pGrades[i];
    }

    for (int i = 0; i < size; i++) {
        std::cout << pGrades[i] << ' ';
    }

    delete[] pGrades; // delete[] if it is an array

    // Vector = array-like container that is dynamically
    //          managed throughout the program

    std::vector<int> numbers = {1, 2, 3};
    std::vector<float> numbersF = {1.1f, 2.2f, 3.3f};
    std::vector<std::string> names = {"Bob", "Mark", "Ryan"};

    // Loop through an vector with a
    // range-based for-loop or if you want to access the current index
    // without the copies use the '&' Operator.

    for (const auto number : numbers) {
        std::cout << number << " ";
    }
    std::cout << '\n';

    for (const auto numberf : numbersF) {
        std::cout << numberf << " ";
    }
    std::cout << '\n';

    for (const auto name : names) {
        std::cout << name << " ";
    }

    // push_back() = add an element or value to the end of a vector.

    std::vector<int> numbers2;

    // add the value 2, 5, and 10 to the vector.
    numbers2.push_back(2);
    numbers2.push_back(5);
    numbers2.push_back(10);

    std::cout << "Size: " << numbers2.size() << " Capacity: " << numbers2.capacity() << '\n';
    for (const int i : numbers2) {
        std::cout << i << ' ';
    }

    // &vectors = change access by reference
    //            change the original values.

    std::vector<int> points = {70, 98, 99, 87, 89};

    for (const auto point : points) {
        std::cout << point << " ";
        std::cout << std::endl;
    }
    std::cout << std::endl;

    for (auto& point : points) {
        point += 10; // add +10 to each value
    }

    for (const auto point : points) {
        std::cout << point << " ";
        std::cout << std::endl;
    }

    // Ctime = STL C++ library for managing time and states
    //         Comes with a few useful functions but kind of outdated
    // Chrono = Newer and more modern alternative to Ctime more C++
    //          style rather than old C

    time_t now = time(nullptr);
    std::cout << "Unix-timestamp: " << now << '\n';

    tm* local = localtime(&now);

    char buffer[50];
    strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", local);
    std::cout << "Formated Date: " << buffer << "\n";

    time_t passed = now + 10;

    std::cout << "Waiting...\n";
    std::cout << "Enter something:\n";
    std::string dummy;
    std::getline(std::cin, dummy);

    time_t afterInput = time(nullptr);

    if (afterInput > passed) {
        std::cout << "The input was too LATE.\n";
    } else {
        std::cout << "The input was on time.\n";
    }

    return 0; 
}

void _func1() {
    std::cout << "this is a function without parameters\n";
    std::cout << "it is a reuseable block of code\n";
    std::cout << "functions are useful even without them.\n\n";
}

void _func2(std::string func__) {
    std::cout << "this is a " << func__ << " and it also uses a parameter\n";
    std::cout << "it is a reuseable block of code\n";
    std::cout << "a " << func__ << " is useful also with parameters.\n\n";
}
double calculateSquare(double x) {
    return x * x;
}

std::string conncatonateString(std::string string1, std::string string2) {
    return string1 + " " + string2;
}

void sort(int array[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void swap(std::string &x, std::string &y) {
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}

void printInfo(const std::string name, const int age) {
    // cannot change these because the parameters were passed as const
    // name = " ";
    // age = 0;
    std::cout << name << '\n';
    std::cout << age << '\n';
}