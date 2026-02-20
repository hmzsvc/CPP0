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
    std::cout << "Gormek istediginiz kişinin index numarasini giriniz: ";
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
            std::cout << "Hata: bu indexte kayitli kisi yok!" << std::endl;
    }
    else
        std::cout << "Hata: Gecersiz index girdiniz!" << std::endl;
}

void PhoneBook::addContact()
{
    std::string input;
    std::cout << "First_Name: ";
    std::getline(std::cin, input);
    _contacts[_index].setFirstName(input);
    std::cout << "Last_Name: ";
    std::getline(std::cin, input);
    _contacts[_index].setLastName(input);
    std::cout << "Nickname: ";
    std::getline(std::cin, input);
    _contacts[_index].setNickName(input);
    std::cout << "Phone_Number: ";
    std::getline(std::cin, input);
    _contacts[_index].setPhoneNumber(input);
    std::cout << "Dark_Secret: ";
    std::getline(std::cin, input);
    _contacts[_index].setSecret(input);
    _index = (_index + 1) % 8;
    if (_totalSaved < 8)
        _totalSaved++;
}