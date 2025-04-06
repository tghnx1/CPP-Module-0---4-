#include "Zombie.hpp"

void    Zombie::announce()
{
    cout << "name: " << this->name << endl;
}

void Zombie::nameZombie(string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
  cout << this->name << " died!" << endl;
}