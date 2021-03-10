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
		MateriaSource( const MateriaSource & src );
		virtual ~MateriaSource();
		MateriaSource & operator=( MateriaSource const & rhs );
		
		void learnMateria(AMateria *m);
		AMateria *createMateria(std::string const &type);

		int getNum() const;
		AMateria *getSource(int i) const;
		
};

#endif