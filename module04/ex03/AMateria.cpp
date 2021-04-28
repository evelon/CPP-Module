#include "AMateria.hpp"

void	AMateria::setXP(unsigned int xp)
{
	this->_xp = xp;
}

AMateria::AMateria(std::string const& type):
	type(type), _xp(0) {}

AMateria::AMateria(AMateria const& amateria):
	type(amateria.getType()), _xp(amateria.getXP()) {}

AMateria::~AMateria() {}

AMateria&	AMateria::operator=(AMateria const& amateria)
{
	this->_xp = amateria._xp;
	return (*this);
}

std::string const&	AMateria::getType() const
{
	return (this->type);
}

unsigned int	AMateria::getXP() const
{
	return (this->_xp);
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
	this->_xp += 10;
}