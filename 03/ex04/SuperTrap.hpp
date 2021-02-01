#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include "NinjaTrap.hpp"
# include "FragTrap.hpp"
# include "ClapTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
	public :
		SuperTrap(std::string name);
		~SuperTrap();
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
};

#endif
