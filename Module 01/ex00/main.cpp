#include "Zombie.hpp"

int main()
{
    RandomChump( "olalla");
    Zombie *new_one = newZombie("turudu");
    new_one->announce();
    delete new_one;
}
