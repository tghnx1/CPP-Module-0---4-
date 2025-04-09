#include "Zombie.hpp"

void RandomChump( std::string name )
{
  Zombie *zomblie = newZombie(name);
  zomblie->announce();
  delete zomblie;
}
