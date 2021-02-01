#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private :
		static std::string challenge[5];

	public :
		ScavTrap(std::string name);
		~ScavTrap();
		void challengeNewcomer();
};

#endif
