#include "HumanA.hpp"

HumanA::HumanA(string name, Weapon weapon)
{
  this->name = name;
  this->weapon = weapon;
}

void  HumanA::attack()
{
  cout << this->name << "  attacks with their " << this->weapon << endl;
}