#ifndef ICE_HPP
# define ICE_HPP
# include <string>
# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
	public :
		Ice();
		Ice(Ice const &other);
		virtual ~Ice();
		Ice & operator=( Ice const & rhs );

		AMateria *clone() const;
		void use(ICharacter &target);
};

#endif