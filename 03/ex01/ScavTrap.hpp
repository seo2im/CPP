#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include <string>
# include <ctime>

class ScavTrap
{
	private :
		static std::string challenge[5];
		static const int maxHitPoint = 100;
		static const int maxEnergyPoint = 50;
		int hitPoint;
		int energyPoint;
		int level;
		std::string name;
		int meleeAttackDamage;
		int rangedAttackDamage;
		int armorDamageRuduction;
	public :
		ScavTrap(std::string name);
		~ScavTrap();
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		bool takeDamage(unsigned int amount);
		void beRepaierd(unsigned int amount);
		void challengeNewcomer();
};

#endif
