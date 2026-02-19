#include <iostream>
#include "phonebook.hpp"

int main()
{
    PhoneBook rehber;
    std::string command;

    std::cout << "Kullanılabilir Komutlar: ADD, SEARCH, EXIT" << std::endl;

    while (true)
    {
        std::cout << "> ";
        std::getline(std::cin, command);
        if (std::cin.eof()) //ctrl+D basılırsa sonsuz döngüde kalmaması için
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