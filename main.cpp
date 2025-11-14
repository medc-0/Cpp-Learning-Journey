#include <iostream>
#include <vector>

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
    
    std::cout << "Hello, World!" << '\n';
    return 0; 
}