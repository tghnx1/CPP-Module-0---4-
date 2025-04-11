#pragma once

#include <iostream>
#include <strings.h>

using std::string;

class ClapTrap
{
	protected:
		string	name;
		int		hit_points;
		int		energy_points;
		int		attack_damage;
	public:
		ClapTrap(void);
		ClapTrap(const string&);
		ClapTrap(const ClapTrap&);
		ClapTrap& operator = (const ClapTrap&);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

