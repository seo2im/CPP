#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP
# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>

class FragTrap
{
	public :
		FragTrap();
		FragTrap( std::string name );
		FragTrap( FragTrap const &src );
		~FragTrap();
		FragTrap & operator=( FragTrap const & op );

		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaierd(unsigned int amount);
		void vaulthunter_dot_exe(std::string const & target);
		void dance(std::string const & target);
		void provocation(std::string const & target);
		void slow(std::string const & target);
		void fearing(std::string const & target);
		void fascination(std::string const & target);
		std::string getName() const;
	
	private :
		static const int maxHitPoint = 100;
		static const int maxEnergyPoint = 100;
		int hitPoint;
		int energyPoint;
		int level;
		std::string name;
		int meleeAttackDamage;
		int rangedAttackDamage;
		int armorDamageRuduction;
};

typedef void(FragTrap::* semiAttack) (std::string const &target);
std::ostream & operator<<( std::ostream & o, FragTrap const & i );

#endif
