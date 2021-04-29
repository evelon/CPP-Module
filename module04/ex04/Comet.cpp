#include "Comet.hpp"

std::string const	Comet::name = "Comet";

Comet::Comet(void) {}

Comet::Comet(Comet const& comet)
{
	(void)comet;
}

Comet::~Comet(void) {}

Comet&	Comet::operator=(Comet const& comet)
{
	(void)comet;
	return (*this);
}

std::string	Comet::beMined(StripMiner* sm) const
{
	(void)sm;
	return ("Tartarite");
}

std::string	Comet::beMined(DeepCoreMiner* dcm) const
{
	(void)dcm;
	return ("Meium");
}

std::string	Comet::getName(void) const
{
	return (this->name);
}