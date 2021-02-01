#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{		
	public :
		FragTrap(std::string name);
		~FragTrap();
		void vaulthunter_dot_exe(std::string const & target);
		void A1(std::string const &target);
		void A2(std::string const &target);
		void A3(std::string const &target);
		void A4(std::string const &target);
		void A5(std::string const &target);
};

typedef void(FragTrap::* semiAttack) (std::string const & target);

#endif

