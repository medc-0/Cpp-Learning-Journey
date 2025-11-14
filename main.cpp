#include <iostream>
#include <vector>
#include <cmath>

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
   
    return 0; 
}