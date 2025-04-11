#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	string hero_name = "John Snow";
	string enemy_name = "Lara Croft";
	string robot_name = "Kekos";
	string frag_name = "Lolos";

	ClapTrap	hero(hero_name);
    ScavTrap	robot(robot_name);
    FragTrap	frag(frag_name);


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

    frag.attack(enemy_name); // should attack with damage points (0 by default)
	frag.takeDamage(9); // (should be alive)
	frag.beRepaired(2); // (should be alive)
	frag.takeDamage(3); // (should be alive)
	frag.takeDamage(1); // (should be alive)
	frag.beRepaired(1); // (should be alive)
    frag.highFivesGuys();
	return (0);
}
