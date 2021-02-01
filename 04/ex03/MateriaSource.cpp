#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	this->num = 0;
	for(int i = 0; i < 4; i++)
		this->sources[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < 4; i++)
		delete this->sources[i];
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (this->num == 4 || !m)
		return ;
	for(int i = 0; i < this->num; i++)
		if (this->sources[i] == m)
			return ;
	this->sources[this->num++] = m;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < this->num; i++)
		if (this->sources[i]->getType() == type)
			return (this->sources[i]->clone());
	return (NULL);
}
