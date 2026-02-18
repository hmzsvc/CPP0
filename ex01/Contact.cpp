#include "Contact.hpp"

#include <iostream>
#include <string>

Contact::Contact()
{
}
Contact::~Contact()
{
}
void    Contact::setFirstName(std::string str)
{
    this->_firstName = str;
}

void    Contact::setLastName(std::string str)
{
    this->_lastName = str;
}

void    Contact::setNickName(std::string str)
{
    this->_nickname = str;
}

void    Contact::setPhoneNumber(std::string str)
{
    this->_phoneNumber = str;
}

void    Contact::setSecret(std::string str)
{
    this->_secret = str;
}

std::string Contact::getFirstName() const
{
    return(_firstName);
}

std::string Contact::getLastName() const
{
    return(_lastName);
}

std::string Contact::getNickName() const
{
    return(_nickname);
}

std::string Contact::getPhoneNumber() const
{
    return(_phoneNumber);
}

std::string Contact::getSecret() const
{
    return(_secret);
}