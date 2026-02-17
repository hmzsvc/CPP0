/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasivaci <hasivaci@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 18:39:24 by hasivaci          #+#    #+#             */
/*   Updated: 2026/02/17 18:49:11 by hasivaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <iostream>
#include "phonebook.hpp"

class phonebook
{
    public:
    contact book[8];
};

class contact
{
    public:
    void set_index(int i);
    void set_first_name(std::string str);
    void set_last_name(std::string str);
    void set_nick_name(std::string str);
    void set_phone_number(std::string str);
    void set_secret(std::string str);
    int get_index();
    std::string get_first_name();
    std::string get_last_name();
    std::string get_nick_name();
    std::string get_phone_number();
    std::string get_secret();

    private:
    int index;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string secret;
}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
