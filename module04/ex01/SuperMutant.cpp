#include "SuperMutant.hpp"

SuperMutant::SuperMutant(int hp, std::string const& type):
	Enemy(hp, type)
{
	std::cout << "Gaaah. Me want smash heads!\n";
}

SuperMutant::~SuperMutant() {}

SuperMutant::SuperMutant(SuperMutant const& supermutant):
	Enemy(supermutant.hitPoints, supermutant.type)
{
	std::cout << "Gaaah. Me want smash heads!\n";
}

SuperMutant&	SuperMutant::operator=(SuperMutant const& supermutant)
{
	this->hitPoints = supermutant.hitPoints;
	this->type = supermutant.type;
	return (*this);
}

void	SuperMutant::takeDamage(int damage)
{
	if (this->hitPoints <= 0)
		return ;
	this->hitPoints -= damage - 3;
	if (this->hitPoints <= 0)
		std::cout << "Aaargh...\n";
}