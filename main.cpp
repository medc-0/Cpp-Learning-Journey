#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>

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
*/

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

    // Useful Math Related functions = Showcase pof very useful math-related
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
    int day = 298;

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
    int punkte = 10;

    punkte > 9 ? std::cout << "You have passed!\n" : std::cout << "You did NOT pass!\n";

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

    return 0; 
}

/*
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
*/