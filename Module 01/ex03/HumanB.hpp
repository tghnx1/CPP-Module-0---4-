#pragma once
#include "Weapon.hpp"


class HumanB
{
    public:
        HumanB(std::string name);
        void    setWeapon(Weapon *weapon);
        void    attack();
    private:
        Weapon *weapon;
        std::string name;
};