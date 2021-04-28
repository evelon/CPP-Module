#include "RadScorpion.hpp"

RadScorpion::RadScorpion(int hp, std::string const& type):
	Enemy(hp, type)
{
	std::cout << "* click click click *\n";
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *\n";
}

RadScorpion::RadScorpion(RadScorpion const& radscorpion):
	Enemy(radscorpion.hitPoints, radscorpion.type)
{
	std::cout << "* click click click *\n";
}

RadScorpion&	RadScorpion::operator=(RadScorpion const& radscorpion)
{
	this->hitPoints = radscorpion.hitPoints;
	this->type = radscorpion.type;
	return (*this);
}
