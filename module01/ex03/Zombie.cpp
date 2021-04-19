#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void):
	Name(std::string()), Type(std::string()) {}

Zombie::Zombie(std::string name, std::string type):
	Name(name), Type(type) {}

Zombie::~Zombie(void)
{
	std::cout << '<' << Name << " (" << Type << ")> Arrrrgg.....\n";
	std::cout << Type << " zombie " << Name << "'s brain get destroyed..." << std::endl;
	return ;
}

void	Zombie::setAttribute(std::string name, std::string type)
{
	Name = name;
	Type = type;

	std::cout << name << " became a " << Type << " zombie! Oh noes!" << std::endl;
	return ;
}

void	Zombie::announce(void)
{
	std::cout << '<' << Name << " (" << Type << ")> Braiiiiiiinnnsssss..." << std::endl;
	return ;
}