#pragma once
#include <string>
#include <iostream>
#include <list>

using namespace std;

class contact
{
    public:
        string    first_name;
        string    last_name;
        string    nick_name;
        long      phone;
        string    darkest_secret;
};

class PhoneBook
{
    private:
        list<contact>   contacts;
    public:
        void            add();
        void            search();
        void            ft_exit();
};