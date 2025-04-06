#include "HumanA.hpp"

std::string& Weapon::getType()
{
  std::string &type_ref = type;
  return type_ref;
}

void    Weapon::setType(std::string new_type)
{
   type = new_type;
}

Weapon::Weapon(std::string new_type)
{
  this->setType(new_type);
}
