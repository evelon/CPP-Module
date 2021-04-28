#include "Ice.hpp"

Ice::Ice(void):
	AMateria("ice") {}

Ice::Ice(Ice const& ice):
	AMateria("ice")
{
	*this = ice;
}

Ice::~Ice(void) {}

Ice&	Ice::operator=(Ice const& ice)
{
	this->setXP(ice.getXP());
	return (*this);
}

AMateria* Ice::clone()
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target);
