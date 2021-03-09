#ifndef CURE_HPP
# define CURE_HPP
# include <string>
# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
	public :
		Cure();
		Cure( const Cure & src );
		~Cure();
		Cure & operator=( Cure const & rhs );

		AMateria *clone() const;
		void use(ICharacter &target);
};

#endif