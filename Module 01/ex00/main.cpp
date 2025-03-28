#include "Zombie.hpp"

int main()
{
    randomChump( "hui");
    Zombie *new_one = newZombie("pizda");
    new_one->announce();
    delete new_one;
}