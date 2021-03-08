#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public :
		NinjaTrap();
		NinjaTrap(std::string name);
		NinjaTrap( const NinjaTrap & src );
		~NinjaTrap();
		NinjaTrap & operator=( NinjaTrap const & rhs );

		void ninjaShoebox(ClapTrap &trap);
		void ninjaShoebox(FragTrap &trap);
		void ninjaShoebox(ScavTrap &trap);
		void ninjaShoebox(NinjaTrap &trap);
};

std::ostream & operator<<( std::ostream & o, NinjaTrap const & i );

#endif
