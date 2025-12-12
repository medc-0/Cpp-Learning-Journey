#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <limits>

struct Contact {
    std::string name;
    std::string email;
    std::string phone;
};

void saveContacts(const std::vector<Contact>& contacts)
{
    std::ofstream file("contacts.txt");

    if (!file.is_open()) 
    {   
        std::cout << "Error: Could not open file for saving!\n";
        return;
    } 
    
    for (int i=0; i<contacts.size() ;i++) 
    {
        file << contacts[i].name << ";" << contacts[i].email << ";" << contacts[i].phone << '\n';
    }
        
    file.close();
    std::cout << "Contacts saved successfully!\n";
}

void loadContacts(std::vector<Contact>& contacts) 
{
    std::ifstream file("contacts.txt");

    if (!file.is_open()) 
    {
        return;
    }
    std::string line;
    while (std::getline(file, line)) 
    {
        Contact c;

        size_t pos1 = line.find(";");
        size_t pos2 = line.find(";", pos1 + 1);

        if (pos1 == std::string::npos || pos2 == std::string::npos) 
        {
            continue;
        }

        c.name = line.substr(0, pos1);
        c.email = line.substr(pos1 + 1, pos2 - (pos1 + 1));
        c.phone = line.substr(pos2 + 1);

        contacts.push_back(c);
    }
    file.close();
}

void printMenu() 
{
    std::cout << "------------------------\n";
    std::cout << "| 1. Add contact       |\n";
    std::cout << "| 2. View all contacts |\n";
    std::cout << "| 3. Search contacts   |\n";
    std::cout << "| 4. Delete contact    |\n";
    std::cout << "| 5. Exit              |\n";
    std::cout << "------------------------\n";
}

void addContact(std::vector<Contact>& contacts) 
{   
    Contact contact;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Enter contact name: ";
    std::getline(std::cin, contact.name);
    
    std::cout << "Enter contact email: ";
    std::cin >> contact.email;

    std::cout << "Enter contact phone: ";
    std::cin >> contact.phone;
    contacts.push_back(contact);
    std::cout << "Contact added successfully!\n";
}

void viewContacts(std::vector<Contact>& contacts) 
{   
    if (contacts.empty()) 
    {
        std::cout << "No Contacts yet!\n";
    }
    for (int i = 0; i < contacts.size();i++) 
    {
        std::cout << i << ". name: " << contacts[i].name << '\n';
        std::cout << i << ". email: " << contacts[i].email << '\n';
        std::cout << i << ". phone: " << contacts[i].phone << '\n';
        std::cout << '\n';
    }
}

void searchContacts(std::vector<Contact>& contacts) 
{   
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::string name;
    std::cout << "Enter contacts name: ";
    std::getline(std::cin, name);

    if (contacts.empty()) 
    {
        std::cout << "No Contacts yet!\n";
    }
    else {
        for (int i = 0; i < contacts.size();i++) 
        {
            if (contacts[i].name == name) 
            {
                std::cout << i << ". name: " << contacts[i].name << '\n';
                std::cout << i << ". email: " << contacts[i].email << '\n';
                std::cout << i << ". phone: " << contacts[i].phone << '\n';
            }
        }
    }
}

void deleteContact(std::vector<Contact>& contacts)
{
    int index;
    std::cout << "Enter contacts index number: ";
    std::cin >> index;

    if (contacts.empty()) 
    {
        std::cout << "No Contacts yet!\n";
    }
    else 
    {   if (index >= 0 && index < contacts.size()) 
        {
            std::string removedContact = contacts[index].name;
            contacts.erase(contacts.begin() + index);
            std::cout << "Successfully Removed Contact!\n" << removedContact << '\n';
        }
    }
}

int main() 
{
    std::vector<Contact> contacts;
    loadContacts(contacts);

    int choice;
    bool running = true;

    std::cout << "--- Contact Manager---\n";

    while (running) 
    {
        printMenu();

        std::cout << "Enter a choice: ";
        std::cin >> choice;

        if (choice == 1) 
        {
            addContact(contacts);
        }
        else if (choice == 2) 
        {
            viewContacts(contacts);
        }
        else if (choice == 3) 
        {
           searchContacts(contacts);
        }
        else if (choice == 4) 
        {
            deleteContact(contacts);
        }
        else if (choice == 5) 
        {   
            saveContacts(contacts);
            std::cout << "--------------------\n";
            std::cout << "| Exiting console..|\n";
            std::cout << "--------------------\n";
            running = false;
        }
        else 
        {
            std::cout << "Invalid choice please try again.\n";
        }
    }
    return 0;
}