#include "Zombie.hpp"

Zombie::Zombie(string name_zombie)
{
    this->name = name_zombie;
}

void    Zombie::announce(void)
{
    cout << name << ": BraiiiiiiinnnzzzZ..." << endl;
}

