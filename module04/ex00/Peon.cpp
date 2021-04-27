#include "Peon.hpp"

Peon::Peon(std::string name = "name"):
	Victim(name)
{
	this->bornMsg();
}

void	Peon::bornMsg(void)
{
	std::cout << "Zog zog.\n";
}

Peon::~Peon()
{
	std::cout << "Bleuark...\n";
}

Peon::Peon(Peon const& peon)
{
	*this = peon;
}

Peon&	Peon::operator=(Peon const& peon)
{
	this->name = peon.getName();
}
