#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const& name, int apcost, int damage):
	name(name), apCost(apcost), damage(damage) {}

AWeapon::~AWeapon() {}

AWeapon::AWeapon(AWeapon const& aweapon):
	name(aweapon.name),
	apCost(aweapon.apCost),
	damage(aweapon.damage)
{}

AWeapon&	AWeapon::operator=(AWeapon const& aweapon)
{
	this->name = aweapon.name;
	this->apCost = aweapon.apCost;
	this->damage = aweapon.damage;
	return (*this);
}

std::string const&	AWeapon::getName(void) const
{
	return (this->name);
}

int			AWeapon::getAPCost(void) const
{
	return (this->apCost);
}

int			AWeapon::getDamage(void) const
{
	return (this->damage);
}
