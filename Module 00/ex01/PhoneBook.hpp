#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.hpp"

using std::string;

class PhoneBook
{
    public:
        PhoneBook();
        void                        add();
        void                        search();
	private:
        Contact         		   contacts[8];
        void                       truncate(string);
        int                        ask_index();
        void                       contact_display(int);
        int                        size;
        int                        oldest_index;
};
