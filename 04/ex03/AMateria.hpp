#ifndef A_MATERIA_HPP
# define A_MATERIA_HPP
# include <string>
# include <iostream>
class AMateria;
# include "ICharacter.hpp"

class AMateria
{
	protected :
		std::string _type;
		unsigned int _xp;

	public :
		AMateria(std::string const &type);
		virtual ~AMateria();

		std::string const &getType() const;
		unsigned int getXP() const;

		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif