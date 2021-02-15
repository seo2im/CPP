#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{		
	public :
		FragTrap(std::string name);
		~FragTrap();
		void vaulthunter_dot_exe(std::string const & target);
		void dance(std::string const &target);
		void provocation(std::string const &target);
		void slow(std::string const &target);
		void fearing(std::string const &target);
		void fascination(std::string const &target);
};

typedef void(FragTrap::* semiAttack) (std::string const & target);

#endif

