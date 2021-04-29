#include "RadScorpion.hpp"

RadScorpion::RadScorpion():
	Enemy(80, "Rad Scorpion")
{
	std::cout << "* click click click *\n";
}

RadScorpion::~RadScorpion() {}

RadScorpion::RadScorpion(RadScorpion const& radscorpion):
	Enemy(radscorpion.hitPoints, radscorpion.type)
{
	std::cout << "* click click click *\n";
}

void	RadScorpion::takeDamage(int damage)
{
	if (this->hitPoints <= 0)
		return ;
	this->hitPoints -= damage;
	if (this->hitPoints <= 0)
		std::cout << "* SPROTCH *\n";
}

RadScorpion&	RadScorpion::operator=(RadScorpion const& radscorpion)
{
	this->hitPoints = radscorpion.hitPoints;
	this->type = radscorpion.type;
	return (*this);
}
