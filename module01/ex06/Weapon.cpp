#include "Weapon.hpp"

Weapon::Weapon(std::string type):
	type(type) {}

Weapon::~Weapon(void) {}

const std::string&	Weapon::getType(void)
{
	return (type);
}

void	Weapon::setType(std::string new_type)
{
	type = new_type;
	return ;
}
