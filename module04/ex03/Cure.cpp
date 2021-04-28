#include "Cure.hpp"

Cure::Cure(void):
	AMateria("cure") {}

Cure::Cure(Cure const& cure):
	AMateria("cure")
{
	*this = cure;
}

Cure::~Cure(void) {}

Cure&	Cure::operator=(Cure const& cure)
{
	this->setXP(cure.getXP());
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}
