#include "HumanB.hpp"
#include "Weapon.hpp"

void    HumanB::setWeapon(Weapon &weapon) {
    this->_weapon = &weapon;
}

void  HumanB::attack()
{
    std::cout << this->_name << "  attacks with their ";
      if (_weapon)
         std::cout << this->_weapon->getType() << std::endl;
      else
          std::cout << "legs" << std::endl;
}

HumanB::HumanB(std::string name)
{
  this->_weapon = nullptr;
  this->_name = name;
}
