#pragma once
#include "Weapon.hpp"


class HumanA
{
    public:
        HumanA(std::string, Weapon&);
        void  attack();
    private:
        std::string _name;
        Weapon &_weapon;
};
