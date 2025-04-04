#pragma once
#include <iostream>
#include <list>
#include <iomanip>
#include <array>
#include <string>
#include <stdlib.h>
#include <stdio.h>

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
    Contact()
    {
        first_name[0] = '\0';
        last_name[0] = '\0';
        nick_name[0] = '\0';
        phone[0] = '\0';
        darkest_secret[0] = '\0';
        index = -1;
    }
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
        PhoneBook()
        {
          size = 0;
          oldest_index = 0;
        }
        void            add();
        void            search();
        void            ft_exit();
};