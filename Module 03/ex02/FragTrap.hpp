#pragma once

#include "ScavTrap.hpp"

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