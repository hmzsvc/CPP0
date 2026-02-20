#include "PhoneBook.hpp"

int main()
{
    PhoneBook rehber;
    std::string command;
    
    while (true)
    {
        std::cout << "Kullanılabilir Komutlar: ADD, SEARCH, EXIT" << std::endl;
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
            rehber.addContact();
        }
        else if (command == "SEARCH")
        {
            rehber.searchContact();
        }
    }
    return(0);
}