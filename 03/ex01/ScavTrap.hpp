#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include <string>
# include <ctime>

class ScavTrap
{
	public :
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap( const ScavTrap & src );
		~ScavTrap();
		ScavTrap & operator=( ScavTrap const & rhs );

		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaierd(unsigned int amount);
		void challengeNewcomer();
		std::string getName() const;

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
};

std::ostream & operator<<( std::ostream & o, ScavTrap const & i );

#endif
