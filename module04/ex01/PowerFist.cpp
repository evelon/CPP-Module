#include "PowerFist.hpp"

PowerFist::PowerFist(std::string const& name, int apcost, int damage):
	AWeapon(name, apcost, damage) {}

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
