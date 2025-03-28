#include "Zombie.hpp"

void randomChump( std::string name )
{
  Zombie *zomblie = newZombie(name);
  zomblie->announce();
  delete zomblie;
}