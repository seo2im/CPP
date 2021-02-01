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
		~Ice();

		AMateria *clone() const;
		void use(ICharacter &target);
};

#endif