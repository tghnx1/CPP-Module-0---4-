#pragma once
#include "Weapon.hpp"


class HumanB
{
public:
    HumanB(std::string, Weapon&);
    void  attack();
private:
    Weapon *weapon;
    std::string name;
};