#pragma once
#include "Weapon.hpp"


class HumanA
{
    public:
        HumanA(std::string, Weapon&);
        void  attack();
    private:
        std::string name;
        Weapon &weapon;
};