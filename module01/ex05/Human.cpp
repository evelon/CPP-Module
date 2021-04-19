#include "Human.hpp"

Human::Human(void) {}

Human::~Human(void) {}

Brain		Human::getBrain(void)
{
	return (brain);
}

std::string	Human::identify(void) const
{
	return (brain.identify());
}