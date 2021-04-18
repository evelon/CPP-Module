#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name, std::string type)
{
	Name = name;
	Type = type;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << '<' << Name << " (" << Type << ")> Arrrrgg.....\n";
	std::cout << Type << " zombie " << Name << "'s brain get destroyed..." << std::endl;
	return ;
}

void	Zombie::announce(void)
{
	std::cout << '<' << Name << " (" << Type << ")> Braiiiiiiinnnsssss..." << std::endl;
	return ;
}