#include "HumanA.hpp"


int main()
{
    Weapon club("red stick");
    std::string &type = club.getType();
    std::cout << "Type: " << type << std::endl;
    HumanA bob("Bob", club);

    /*{
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }*/
    return 0;
}