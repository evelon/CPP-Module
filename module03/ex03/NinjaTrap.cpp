#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name):
	ClapTrap("N1NJ4-TP", name, 60, 60, 120, 120, 1, 60, 5, 0)
{}

NinjaTrap::~NinjaTrap() {}

NinjaTrap::NinjaTrap(NinjaTrap const& ninjatrap):
	ClapTrap(ninjatrap) {}

NinjaTrap&	NinjaTrap::operator=(NinjaTrap const& ninjatrap)
{
	ClapTrap::operator=(ninjatrap);
	return (*this);
}

void	NinjaTrap::ninjaShoeBox(ClapTrap const& claptrap)
{

}

void	NinjaTrap::ninjaShoeBox(FragTrap const& fragtrap)
{

}

void	NinjaTrap::ninjaShoeBox(ScavTrap const& scavtrap)
{

}

void	NinjaTrap::ninjaShoeBox(NinjaTrap const& ninjatrap)
{

}