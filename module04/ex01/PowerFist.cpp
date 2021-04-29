#include "PowerFist.hpp"

PowerFist::PowerFist():
	AWeapon("Power Fist", 8, 50) {}

PowerFist::~PowerFist() {}

PowerFist::PowerFist(PowerFist const& powerfist):
	AWeapon(powerfist.name, powerfist.apCost, powerfist.damage) {}

PowerFist&	PowerFist::operator=(PowerFist const& powerfist)
{
	this->name = powerfist.name;
	this->apCost = powerfist.apCost;
	this->damage = powerfist.damage;
	return (*this);
}

void	PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *\n";
}
