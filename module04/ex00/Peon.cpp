#include "Peon.hpp"

Peon::Peon(std::string name):
	Victim(name)
{
	std::cout << "Zog zog.\n";
}

Peon::~Peon()
{
	std::cout << "Bleuark...\n";
}

Peon::Peon(Peon const& peon):
	Victim(peon.getName())
{}

Peon&	Peon::operator=(Peon const& peon)
{
	this->name = peon.getName();
	return (*this);
}

void 	Peon::getPolymorphed(void) const
{
	std::cout << this->name << " has been turned into a cute little sheep!\n";
}
