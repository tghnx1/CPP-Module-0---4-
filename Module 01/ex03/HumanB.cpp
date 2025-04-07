#include "HumanB.hpp"
#include "Weapon.hpp"

void    HumanB::setWeapon(Weapon *weapon) {
  if (weapon)
    this->weapon = weapon;
}

void  HumanB::attack()
{
    std::cout << this->name << "  attacks with their ";
      if (weapon)
         std::cout << this->weapon->getType() << std::endl;
      else
          std::cout << "legs" << std::endl;
}

HumanB::HumanB(std::string name)
{
  this->weapon = nullptr;
  this->name = name;
}