#include <ctype.h>
#include <iostream>
#include "phonebook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
    _index = 0;
    _totalSaved = 0;
}
PhoneBook::~PhoneBook()
{
}

void PhoneBook::addContact()
{
    std::string input;
    std::cout << "First_Name: ";
    std::cin >> input;
    _contacts[_index].setFirstName(input);
}