#include "Zombie.hpp"

Zombie* newZombie(string name)
{
    Zombie *newZombie;

    newZombie = new Zombie(name);
    return (newZombie);
}