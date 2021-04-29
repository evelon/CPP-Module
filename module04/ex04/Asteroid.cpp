#include "Asteroid.hpp"

std::string const	Asteroid::name = "Asteroid";

Asteroid::Asteroid(void) {}

Asteroid::Asteroid(Asteroid const& asteroid)
{
	(void)asteroid;
}

Asteroid::~Asteroid(void) {}

Asteroid&	Asteroid::operator=(Asteroid const& asteroid)
{
	(void)asteroid;
	return (*this);
}

std::string	Asteroid::beMined(StripMiner* sm) const
{
	(void)sm;
	return ("Flavium");
}

std::string	Asteroid::beMined(DeepCoreMiner* dcm) const
{
	(void)dcm;
	return ("Dragonite");
}

std::string	Asteroid::getName(void) const
{
	return (this->name);
}