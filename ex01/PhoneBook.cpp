#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook()
{
    _index = 0;
    _totalSaved = 0;
}

PhoneBook::~PhoneBook()
{
}

std::string formatString(std::string str)
{
    if (str.length() > 10)
    {
        return(str.substr(0, 9) + ".");
    }
    return(str);
}

void    PhoneBook::searchContact()
{
    std::cout << "|" << std::setw(10) << "index";
    std::cout << "|" << std::setw(10) << "first_name";
    std::cout << "|" << std::setw(10) << "last_name";
    std::cout << "|" << std::setw(10) << "nickname";
    std::cout << "|" << std::endl;

    for (int i = 0; i < _totalSaved; i++)
    {
        std::cout << "|" << std::setw(10) << i + 1;
        std::cout << "|" << std::setw(10) << formatString(_contacts[i].getFirstName());
        std::cout << "|" << std::setw(10) << formatString(_contacts[i].getLastName());
        std::cout << "|" << std::setw(10) << formatString(_contacts[i].getNickName());
        std::cout << "|" << std::endl;
    }
    std::string input;
    std::cout << "please write index: ";
    std::getline(std::cin, input);
    if (input.length() == 1 && input[0] >= '1' && input[0] <= '8')
    {
        int index = input[0] - '1';
        if (index < _totalSaved)
        {
            std::cout << "First Name     : " << _contacts[index].getFirstName() << std::endl;
            std::cout << "Last Name      : " << _contacts[index].getLastName() << std::endl;
            std::cout << "Nickname       : " << _contacts[index].getNickName() << std::endl;
            std::cout << "Phone Number   : " << _contacts[index].getPhoneNumber() << std::endl;
            std::cout << "Darkest Secret : " << _contacts[index].getSecret() << std::endl;
        }
        else
            std::cout << "ERROR: this index is not correct" << std::endl;
    }
    else
        std::cout << "ERROR: invalid index" << std::endl;
}

std::string trim(const std::string& str)
{
    int start = 0;
    int end = str.length() - 1;

    while (str[start] && (str[start] == ' ' || str[start] == '\t' || str[start] == '\n'))
        start++;

    if (str[start] == '\0')
        return ("");

    while (end > start && (str[end] == ' ' || str[end] == '\t' || str[end] == '\n'))
        end--;

    return (str.substr(start, end - start + 1));
}

void PhoneBook::addContact()
{
    std::string input;
    while (true) 
    {
        std::cout << "First Name: ";
        if (!std::getline(std::cin, input))
            return;
        
        input = trim(input);
        
        if (!input.empty()) 
            break;
        std::cout << "Error: Name cannot consist only of spaces!" << std::endl;
    }
    _contacts[_index].setFirstName(input);
    while (true) 
    {
        std::cout << "Last_Name: ";
        if (!std::getline(std::cin, input))
            return;
        
        input = trim(input);
        
        if (!input.empty()) 
            break;
        std::cout << "Error: Last_Name cannot consist solely of spaces!" << std::endl;
    }
    _contacts[_index].setLastName(input);
    while (true) 
    {
        std::cout << "Nickname: ";
        if (!std::getline(std::cin, input))
            return;
        
        input = trim(input);
        
        if (!input.empty()) 
            break;
        std::cout << "Error: Nickname cannot consist solely of spaces!" << std::endl;
    }
    _contacts[_index].setNickName(input);
    while (true) 
    {
        std::cout << "Phone_Number: ";
        if (!std::getline(std::cin, input))
            return;
        
        input = trim(input);
        
        if (!input.empty()) 
            break;
        std::cout << "Error: Phone_Number cannot consist solely of spaces!" << std::endl;
    }
    _contacts[_index].setPhoneNumber(input);
    while (true) 
    {
        std::cout << "Darkest_Secret: ";
        if (!std::getline(std::cin, input))
            return;
        
        input = trim(input);
        
        if (!input.empty()) 
            break;
        std::cout << "Error: Darkest_Secret cannot consist solely of spaces!" << std::endl;
    }
    _contacts[_index].setSecret(input);
    _index = (_index + 1) % 8;
    if (_totalSaved < 8)
        _totalSaved++;
}
