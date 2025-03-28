#include "Zombie.hpp"

Zombie::Zombie(string name_zombie)
{
    this->name = name_zombie;
}

Zombie::~Zombie(void)
{
    cout << name << " pogib" << endl;
}

void    Zombie::announce(void)
{
    cout << name << ": BraiiiiiiinnnzzzZ..." << endl;
}
