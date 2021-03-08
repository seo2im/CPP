#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include "NinjaTrap.hpp"
# include "FragTrap.hpp"
# include "ClapTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
	public :
		SuperTrap();
		SuperTrap(std::string name);
		SuperTrap( const SuperTrap & src );
		~SuperTrap();
		SuperTrap &	operator=( SuperTrap const & rhs );
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
};

std::ostream & operator<<( std::ostream & o, SuperTrap const & i );

#endif
