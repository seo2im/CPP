#ifndef A_MATERIA_HPP
# define A_MATERIA_HPP
# include <string>
# include <iostream>
class AMateria;
# include "ICharacter.hpp"

class AMateria
{
	private :
		unsigned int _xp;
		std::string _type;
		
	public :
		AMateria();
		AMateria(std::string const &type);
		AMateria( const AMateria & src );
		virtual ~AMateria();
		AMateria & operator=( AMateria const & rhs );

		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
		
		std::string const &getType() const;
		unsigned int getXP() const;
};

#endif