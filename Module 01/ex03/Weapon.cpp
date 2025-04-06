#include "HumanA.hpp"

string& Weapon::getType()
{
  string &type_ref = type;
  return type_ref;
}

void    Weapon::setType(string new_type)
{
   type = new_type;
}

Weapon::Weapon(string new_type)
{
  this->setType(new_type);
}
