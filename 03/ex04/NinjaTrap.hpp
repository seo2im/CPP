#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
	public :
		NinjaTrap(std::string name);
		virtual ~NinjaTrap();
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		void ninjaShoebox(ClapTrap &trap);
		void ninjaShoebox(FragTrap &trap);
		void ninjaShoebox(ScavTrap &trap);
		void ninjaShoebox(NinjaTrap &trap);
};

#endif
