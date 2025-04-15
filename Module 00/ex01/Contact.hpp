#pragma once
#include <iostream>
#include <iomanip>
#include <string>

using std::string;
using std::cin;
using std::cout;

class Contact
{
    public:
        int        validate_phone(string);
        Contact    createContact();
        string     getContactName();
        string     getLastName();
        string     getNumber();
        string     getNick();
        string     getSecret();
        Contact();
    private:
        string      first_name;
        string      last_name;
        string      nick_name;
        string      phone;
        string      darkest_secret;
        int         index;

};
