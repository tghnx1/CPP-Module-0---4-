#include "FragTrap.hpp"

void FragTrap::highFivesGuys(void)
{
  std::cout << "High five guuuyyss!!!" << std::endl;
}

FragTrap::FragTrap(void)
{
    std::cout << "FragTrap basic constructor called" << std::endl;
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
    this->name = "Lolek";
}

FragTrap::FragTrap(const string &n)
{
    std::cout << "FragTrap basic constructor called" << std::endl;
    this->name = n;
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (this->energy_points && this->hit_points)
    {
        std::cout << "FragTrap " << this->name << " attacks " << target << ", causing "
                << this->attack_damage <<" points of damage!" << std::endl;
        this->energy_points--;
    }
    else
        std::cout << " FragTrap's attack failed :((((((((((	No energy or he/she is dead!!!" << std::endl;
}