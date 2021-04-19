#include "Brain.hpp"
#include <sstream>

Brain::Brain(void):
	leftHemisphere("thinking"), rightHemisphere("thinking") {}

Brain::~Brain(void) {}

std::string	Brain::identify(void) const
{
	std::stringstream	ss;
	std::string			hex;

	ss << std::hex << this;
	ss >> hex;
	return (hex);
}
