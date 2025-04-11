#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    std::cout << "Basic constructor of ScavTrap called" << std::endl;
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
    this->name = "Lolek";
}

ScavTrap::ScavTrap(const string &n)
{
    std::cout << "Basic constructor of ScavTrap called" << std::endl;
    this->name = n;
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode!!!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->energy_points && this->hit_points)
    {
        std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing "
                << this->attack_damage <<" points of damage!" << std::endl;
        this->energy_points--;
    }
    else
        std::cout << " ScavTrap's attack failed :((((((((((	No energy or he/she is dead!!!" << std::endl;
}