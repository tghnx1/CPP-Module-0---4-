#pragma once
#include "Weapon.hpp"


class HumanB
{
    public:
        HumanB(std::string name);
        void    setWeapon(Weapon &weapon );
        void    attack();
    private:
        Weapon *_weapon;
        std::string _name;
};
