#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name):
	name(name), weapon(NULL) {}

HumanB::~HumanB() {}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
	return ;
}

void	HumanB::attack(void) const
{
	if (weapon == NULL)
		std::cout << name << "has no weapon" << std::endl;
	std::cout << name << " attacks with his " << (*weapon).getType() << std::endl;
	return ;
}
