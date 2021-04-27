#include "Victim.hpp"

Victim::Victim(std::string name):
	Person(name)
{
	std::cout << "Some random victim called " << this->name << " just appeared!\n";
}

Victim::~Victim()
{
	std::cout << "Victim " << this->name << " just died for no apparent reason!\n";
}

Victim::Victim(Victim const& victim)
{
	*this = victim;
}

Victim&	Victim::operator=(Victim const& victim)
{
	this->name = victim.name;
	return (*this);
}

std::string	Victim::getName(void) const
{
	return (this->name);
}

void	Victim::getPolymorphed(void) const
{
	std::cout << this->name << " has been turned into a cute little sheep!\n";
}

std::ostream&	operator<<(std::ostream& os, Victim const& victim)
{
	os << "I'm " << victim.getName() << " and I like otters!\n";
	return (os);
}
