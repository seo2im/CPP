#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{		
	public :
		FragTrap();
		FragTrap(std::string name);
		FragTrap( const FragTrap & src );
		~FragTrap();
		FragTrap & operator=( FragTrap const & rhs );

		void vaulthunter_dot_exe(std::string const & target);
		void dance(std::string const &target);
		void provocation(std::string const &target);
		void slow(std::string const &target);
		void fearing(std::string const &target);
		void fascination(std::string const &target);
};

typedef void(FragTrap::* semiAttack) (std::string const & target);
std::ostream & operator<<( std::ostream & o, FragTrap const & i );

#endif

