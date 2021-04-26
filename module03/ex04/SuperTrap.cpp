#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string const& name):
	ClapTrap("5UP3R-TP", name, 100, 100, 120, 120, 1, 60, 20, 5),
	FragTrap(name),
	NinjaTrap(name)
{
	std::cout << "A supertrap is born.\n";
}

SuperTrap::~SuperTrap()
{
	std::cout << "A supertrap dies.\n";
}

SuperTrap::SuperTrap(SuperTrap const& supertrap):
	ClapTrap(supertrap), FragTrap(supertrap), NinjaTrap(supertrap) {}

SuperTrap&	SuperTrap::operator=(SuperTrap const& supertrap)
{
	ClapTrap::operator=(supertrap);
	return (*this);
}
