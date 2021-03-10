#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>
# include <ctime>

class ClapTrap
{
	public :
		ClapTrap();
		ClapTrap(std::string name, int maxHitPoint, int maxEnergyPoint, int hitPoint, int energyPoint, int level,
			int meleeAttackDamage, int rangedAttackDamage, int armorDamageRuduction);
		ClapTrap( const ClapTrap & src );
		ClapTrap & operator=( ClapTrap const & rhs );
		virtual ~ClapTrap();
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaierd(unsigned int amount);
		std::string getName() const;

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
};

std::ostream & operator<<( std::ostream & o, ClapTrap const & i );

#endif

