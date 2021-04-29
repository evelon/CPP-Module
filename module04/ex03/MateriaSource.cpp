#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void):
	idx(0) {}

MateriaSource::MateriaSource(MateriaSource const& ms):
	idx(ms.idx)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	for (int i = 0; i < this->idx; i++)
		this->inventory[i] = ms.inventory[i];
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < this->idx; i++)
		delete this->inventory[i];
}

MateriaSource&	MateriaSource::operator=(MateriaSource const& ms)
{
	for (int i = 0; i < this->idx; i++)
		delete this->inventory[i];
	this->idx = ms.idx;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	for (int i = 0; i < this->idx; i++)
		this->inventory[i] = ms.inventory[i];
	return (*this);
}

void		MateriaSource::learnMateria(AMateria* am)
{
	if (this->idx >= 4)
	{
		delete am;
		return ;
	}
	this->inventory[this->idx++] = am;
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	int i;
	for (i = 0; i < this->idx; i++)
	{
		if (!type.compare(this->inventory[i]->getType()))
			return (this->inventory[i]->clone());
	}
	return (NULL);
}