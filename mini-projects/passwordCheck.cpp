#include <iostream>
#include <string>

int main()
{
    std::string password;
    std::string passwordStrength;
    bool hasUppercase = false; 
    bool hasDigit = false;
    bool hasSymbol = false;
    int score = 0;

    std::cout << "Enter a password: ";
    std::getline(std::cin, password);

     if (password.length() >= 8) 
     {
        for (int i=0; i < password.length(); i++) 
        {
            if (isdigit(password[i]))
            {
                hasDigit = true;
            }
            else if (password[i] == '&' || password[i] == '#' || password[i] == '@')
            {   
                hasSymbol = true;
            }
            else if (isupper(password[i])) {
                hasUppercase = true;
            }
        }

    if (hasDigit) score++;
    if (hasUppercase) score++;
    if (hasSymbol) score++;

    if (score <= 1) 
    {
        passwordStrength = "weak";
        std::cout << passwordStrength;

    }
    else if (score == 2)
    {
        passwordStrength = "medium";
        std::cout << passwordStrength;
    }
    else
    {
        passwordStrength = "strong";
        std::cout << passwordStrength;
    }
  }
    else 
    {
        std::cout << "password cant be shorter than 8 characters\n";
    }
    return 0;
}