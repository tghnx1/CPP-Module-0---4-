#include "ClapTrap.hpp"

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit_points && this->energy_points)
	{
		std::cout << this->name << " restored "
				<< amount <<" of hit points! (health)" << std::endl;
		this->energy_points--;
	}
	else
	std::cout  << this->name <<"'s Repairing failed :((((((((((	No energy or he/she is dead!!!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points > amount)
	{
		std::cout << this->name << " took "
				<< amount <<" points of damage!" << std::endl;
		this->hit_points -= amount;
	}
	else if (this->hit_points > 0)
	{
		std::cout << this->name << " took "
				<< amount <<" points of damage " << "end dies :(((((((" << std::endl;
		this->hit_points = 0;
	}
	else
		std::cout << this->name << " is already dead lol..." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energy_points && this->hit_points)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing "
				<< this->attack_damage <<" points of damage!" << std::endl;
		this->energy_points--;
	}
	else
		std::cout << " Attack failed :((((((((((	No energy or he/she is dead!!!" << std::endl;
}

//constructors:

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap Basic constructor called" << std::endl;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
	this->name = "Lolek";
}

ClapTrap::ClapTrap(const string &n)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	this->name = n;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& newone)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	this->name = newone.name;
	this->attack_damage = newone.attack_damage;
	this->hit_points = newone.hit_points;
	this->energy_points = newone.energy_points;
}

ClapTrap::~ClapTrap()
{
  std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& newone)
{
  std::cout << "Copy assignment operator called" << std::endl;
  if (this != &newone)
  {
    this->name = newone.name;
	this->attack_damage = newone.attack_damage;
	this->hit_points = newone.hit_points;
	this->energy_points = newone.energy_points;
  }
  return (*this);
}
