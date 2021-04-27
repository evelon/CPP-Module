#include "You.hpp"

You::You(std::string name):
	Peon(name) {}

You::~You() {}

You::You(You const& you)
{
	*this = you;
}

You&	You::operator=(You const& you)
{
	this->name = you.getName();
	return (*this);
}

void	You::getPolymorphed(void) const
{
	std::cout << this->name << " has been turned into you.\n";
}