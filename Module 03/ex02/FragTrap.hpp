#pragma once

#include "ScavTrap.hpp"
#include <iostream>
#include <strings.h>

using std::string;

class FragTrap : public ScavTrap
{
    public:
        FragTrap();
        FragTrap(const string &n);
        ~FragTrap();
        void attack(const std::string& target);
        void highFivesGuys(void);
};