#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle():
	AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle::~PlasmaRifle() {}

PlasmaRifle::PlasmaRifle(PlasmaRifle const& plasmarifle):
	AWeapon(plasmarifle.name, plasmarifle.apCost, plasmarifle.damage) {}

PlasmaRifle&	PlasmaRifle::operator=(PlasmaRifle const& plasmarifle)
{
	this->name = plasmarifle.name;
	this->apCost = plasmarifle.apCost;
	this->damage = plasmarifle.damage;
	return (*this);
}

void	PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *\n";
}
