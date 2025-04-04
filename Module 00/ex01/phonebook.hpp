#pragma once
#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

class Contact
{
    public:
        char      first_name[100];
        char      last_name[100];
        char      nick_name[100];
        char      phone[100];
        char      darkest_secret[100];
        int       index;
        int       validate_phone(char *);
    Contact();
};

class PhoneBook
{
    private:
        array<Contact, 10>         contacts;
        void                       truncate(char *);
        int                        ask_index();
        void                       contact_display(int);
        int                        size;
        int                        oldest_index;
    public:
        PhoneBook();
        void                        add();
        void                        search();
};