#include "PhoneBook.hpp"

int main()
{
    PhoneBook contactList;
    std::string command;
    
    while (true)
    {
        std::cout << "USEFUL COMMANDS: ADD, SEARCH, EXIT" << std::endl;
        std::cout << "> ";
        std::getline(std::cin, command);
        if (std::cin.eof())
        {
            std::cout << std::endl;
            break;
        }
        if (command == "EXIT")
        {
            break;
        }
        else if (command == "ADD")
        {
            contactList.addContact();
        }
        else if (command == "SEARCH")
        {
            contactList.searchContact();
        }
    }
    return(0);
}