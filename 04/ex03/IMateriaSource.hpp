#ifndef I_MATAERIA_SOURCE
# define I_MATAERIA_SOURCE
# include "AMateria.hpp"

class IMateriaSource
{
	public :
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria *m) = 0;
		virtual AMateria *createMateria(std::string const &type) = 0;
};

#endif