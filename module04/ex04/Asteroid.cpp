#include "Asteroid.hpp"

std::string const	Asteroid::name = "Asteroid";

Asteroid::Asteroid(void) {}

Asteroid::Asteroid(Asteroid const& asteroid) {}

Asteroid::~Asteroid(void) {}

Asteroid&	Asteroid::operator=(Asteroid const& asteroid)
{
	(void)asteroid;
	return (*this);
}

std::string	Asteroid::beMined(StripMiner* ml) const
{
	return ("Flavium");
}

std::string	Asteroid::beMined(DeepCoreMiner* ml) const
{
	return ("Dragonite");
}

std::string	Asteroid::getName(void) const
{
	return (this->name);
}