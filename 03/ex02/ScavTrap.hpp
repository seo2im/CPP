#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public :
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap( const ScavTrap & src );
		virtual ~ScavTrap();
		ScavTrap & operator=( ScavTrap const & rhs );

		void challengeNewcomer();
	
	private :
		static std::string challenge[5];
};

std::ostream & operator<<( std::ostream & o, ScavTrap const & i );

#endif
