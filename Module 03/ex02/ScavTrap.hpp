#pragma once

#include "ClapTrap.hpp"
#include <iostream>
#include <strings.h>

using std::string;

class ScavTrap : public ClapTrap
{
  public:
    ScavTrap();
    ScavTrap(const string &n);
    ~ScavTrap();
    void guardGate();
    void attack(const std::string& target);
};
