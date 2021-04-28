#include "Squad.hpp"

Squad::Squad(void):
	count(0), units(NULL) {}

Squad::Squad(Squad const& squad):
	count(squad.count)
{
	this->units = new ISpaceMarine*[this->count];
	for (int i = 0; i < this->count; i++)
		this->units[i] = squad.units[i];
}

Squad::~Squad(void)
{
	for (int i = 0; i < this->count; i++)
		delete this->units[i];
	delete this->units;
}

Squad&	Squad::operator=(Squad const& squad)
{
	this->count = squad.count;
	this->units = new ISpaceMarine*[this->count];
	for (int i = 0; i < this->count; i++)
		this->units[i] = squad.units[i];
	return (*this);
}

int				Squad::getCount() const
{
	return (this->count);
}

ISpaceMarine*	Squad::getUnit(int N) const
{
	return (this->units[N]);
}

int				Squad::push(ISpaceMarine* spacemarine)
{
	this->count++;
	ISpaceMarine** temp = new ISpaceMarine*[this->count];
	for (int i = 0; i < this->count - 1; i++)
		temp[i] = this->units[i];
	temp[this->count - 1] = spacemarine;
	delete this->units;
	this->units = temp;
	return (this->count);
}
