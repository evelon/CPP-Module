#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string const& name):
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

void	NinjaTrap::ninjaShoeBox(ClapTrap& claptrap)
{
	if (this->hitPoints == 0)
	{
		std::cout << this->getTypeNName() << " is broken.\n";
		return ;
	}
	if (this->energyPoints < 20)
	{
		std::cout << "Not enough energy.\n";
		return ;
	}
	this->energyPoints -= 20;
	std::cout << this->getTypeNName() << " throws a shoebox to" \
	<< claptrap.getTypeNName() << ".\n";
	claptrap.takeDamage(15 + rand() % 20);
}

void	NinjaTrap::ninjaShoeBox(FragTrap& fragtrap)
{
	if (this->hitPoints == 0)
	{
		std::cout << this->getTypeNName() << " is broken.\n";
		return ;
	}
	if (this->energyPoints < 20)
	{
		std::cout << "Not enough energy.\n";
		return ;
	}
	this->energyPoints -= 20;
	std::cout << this->getTypeNName() << " throws a shoebox to " \
	<< fragtrap.getTypeNName() << ", but " << fragtrap.getTypeNName() \
	<< " returns the shoebox.\n";
	this->takeDamage(10 + rand() % 15);
}

void	NinjaTrap::ninjaShoeBox(ScavTrap& scavtrap)
{
	if (this->hitPoints == 0)
	{
		std::cout << this->getTypeNName() << " is broken.\n";
		return ;
	}
	if (this->energyPoints < 20)
	{
		std::cout << "Not enough energy.\n";
		return ;
	}
	this->energyPoints -= 20;
	std::cout << this->getTypeNName() << " forces " \
	<< scavtrap.getTypeNName() << " to eat a shoebox.\n";
	scavtrap.takeDamage(rand() % 10);
}

void	NinjaTrap::ninjaShoeBox(NinjaTrap& ninjatrap)
{
	if (this->hitPoints == 0)
	{
		std::cout << this->getTypeNName() << " is broken.\n";
		return ;
	}
	if (this->energyPoints < 20)
	{
		std::cout << "Not enough energy.\n";
		return ;
	}
	this->energyPoints -= 20;
	std::cout << this->getTypeNName() << " throws a shoebox to " \
	<< ninjatrap.getTypeNName() << ".\n";
	ninjatrap.takeDamage(30 + rand() % 30);
	if (ninjatrap.isBroken())
		return ;
	std::cout << "But " << ninjatrap.getTypeNName() << " also tries to attack back.\n";
	ninjatrap.ninjaShoeBox(*this);
}
