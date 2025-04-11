#pragma once

#include "ClapTrap.hpp"
#include <iostream>
#include <strings.h>

class ScavTrap : public ClapTrap
{
  public:
    ScavTrap();
    ScavTrap(const std::string &n);
    ~ScavTrap();
    void guardGate();
    void attack(const std::string& target);
};
