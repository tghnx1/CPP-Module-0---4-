#include "Zombie.hpp"

int main()
{
    Zombie* zombies;

    zombies = zombieHorde(5, "Garold" );
    for (int i = 0; i < 5; i++)
    {
      zombies[i].announce();
    }
    delete[] zombies;
}