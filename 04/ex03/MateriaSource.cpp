#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource()
{
	this->num = 0;
	for(int i = 0; i < 4; i++)
		this->sources[i] = nullptr;
}

MateriaSource::MateriaSource( const MateriaSource & src )
: num(0)
{
	for (int i = 0; i < src.num; i++)
		this->learnMateria(src.sources[i]->clone());
	for (int i = src.num; i < 4; i++)
		this->sources[i] = nullptr;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < 4; i++)
		delete this->sources[i];
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource & MateriaSource::operator=( MateriaSource const & rhs )
{
	if ( this != &rhs )
	{
		
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void MateriaSource::learnMateria(AMateria *m)
{
	if (this->num == 4 || !m)
		return ;
	for(int i = 0; i < this->num; i++)
		if (this->sources[i] == m)
			return ;
	this->sources[this->num++] = m;
}
/*
?? What this mean?
	"You’ll then be able to create a Materia without knowing it "real" type,
just a string identifying it"
*/
AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < this->num; i++)
		if (this->sources[i]->getType() == type)
			return (this->sources[i]->clone());
	return (NULL);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int MateriaSource::getNum() const
{
	return (this->num);
}

AMateria *MateriaSource::getSource(int i) const
{
	if (this->num < i || i < 0)
		return nullptr;
	return (this->sources[i]);
}