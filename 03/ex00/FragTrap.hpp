#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP
# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>

class FragTrap
{
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
	public :
		FragTrap(std::string name);
		~FragTrap();
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		bool takeDamage(unsigned int amount);
		void beRepaierd(unsigned int amount);
		void vaulthunter_dot_exe(std::string const & target);
		void A1(std::string const &target);
		void A2(std::string const &target);
		void A3(std::string const &target);
		void A4(std::string const &target);
		void A5(std::string const &target);
};

typedef void(FragTrap::* semiAttack) (std::string const &target);

#endif
