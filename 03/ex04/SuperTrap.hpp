#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include "NinjaTrap.hpp"
# include "FragTrap.hpp"

class SuperTrap : public virtual NinjaTrap, public virtual FragTrap
{
	public :
		SuperTrap();
		SuperTrap(std::string name);
		SuperTrap( const SuperTrap & src );
		virtual ~SuperTrap();
		SuperTrap &	operator=( SuperTrap const & rhs );

		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);

		int	getHitPoint() const;
		int getEnergyPoint() const;
};

std::ostream & operator<<( std::ostream & o, SuperTrap const & i );

#endif
