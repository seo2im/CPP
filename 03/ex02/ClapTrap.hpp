#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>
# include <ctime>

class ClapTrap
{
	protected :
		int maxHitPoint;
		int maxEnergyPoint;
		int hitPoint;
		int energyPoint;
		int level;
		std::string name;
		int meleeAttackDamage;
		int rangedAttackDamage;
		int armorDamageRuduction;
	public :
		ClapTrap(std::string name);
		virtual ~ClapTrap();
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaierd(unsigned int amount);
};

#endif

