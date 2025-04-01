#pragma once
#include <string>
#include <iostream>
#include <list>
#include <iomanip>

using namespace std;

class Contact
{
    public:
        Contact(int   contacts_size);
        string    first_name;
        string    last_name;
        string    nick_name;
        string    phone;
        string    darkest_secret;
        int       index;
};

class PhoneBook
{
    private:
        list<Contact>   contacts;
        void            truncate(string);
        int             ask_index();
        void            contact_display(int index);
    public:
        void            add();
        void            search();
        void            ft_exit();
};