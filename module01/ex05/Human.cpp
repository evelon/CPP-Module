#include "Human.hpp"

Human::Human(void) {}

Human::~Human(void) {}

const Brain&	Human::getBrain(void)
{
	return (brain);
}

std::string	Human::identify(void) const
{
	return (brain.identify());
}