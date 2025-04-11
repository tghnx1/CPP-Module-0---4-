#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	string hero_name = "John Snow";
	string enemy_name = "Lara Croft";
	ClapTrap	hero(hero_name);
    ScavTrap	robot;


	hero.attack(enemy_name); // should attack with damage points (0 by default)
	hero.takeDamage(9); // (should be alive)
	hero.beRepaired(2); // (should be alive)
	hero.takeDamage(3); // (should be dead)
	hero.takeDamage(1); // (already dead)
	hero.beRepaired(1); // (should be dead)

	robot.attack(enemy_name); // should attack with damage points (0 by default)
	robot.takeDamage(9); // (should be alive)
	robot.beRepaired(2); // (should be alive)
	robot.takeDamage(3); // (should be alive)
	robot.takeDamage(1); // (should be alive)
	robot.beRepaired(1); // (should be alive)
    robot.guardGate();

	return (0);
}
