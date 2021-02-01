#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private :
		int num;
		AMateria *sources[4];

	public :
		MateriaSource();
		~MateriaSource();
		
		void learnMateria(AMateria *m);
		AMateria *createMateria(std::string const &type);
};

#endif