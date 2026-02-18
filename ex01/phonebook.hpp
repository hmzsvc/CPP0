#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp" 

class PhoneBook
{
    private:
    Contact _contacts[8];
    int _index;
    int _totalSaved;

    public:
    PhoneBook();
    ~PhoneBook();
    void    addContact();
    void    searchContact();
    void    printContact(int index);
};

#endif