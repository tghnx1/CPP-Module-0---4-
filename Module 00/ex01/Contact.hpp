#pragma once
#include <iostream>
#include <cstring>
#include <iomanip>
#include <string>

using namespace std;

class Contact
{
    public:
        string      first_name;
        string      last_name;
        string      nick_name;
        string      phone;
        string      darkest_secret;
        int         index;
        int         validate_phone(string);
        Contact();
};
