#include "ZombieEvent.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

std::string	ZombieEvent::Type = "";


void	ZombieEvent::setZombieType(std::string type)
{
	Type = type;
	return ;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie* zombie = new Zombie(name, Type);

	std::cout << name << " became a " << Type << " zombie! Oh noes!" << std::endl;
	return (zombie);
}

Zombie	ZombieEvent::randomChump(void)
{
	std::string	random_names[] = {"Alex", "Bart", "Christine", "Dart", "Eve", "Frankle", "Greg", "Harl", "Ian", "Jerome", "Karen", "Lynn", "Marlyn", "Niel", "Otto", "Park", "Quincy", "Rinsey", "Sam", "Thomas", "Ursula", "Volk", "Waldo", "Xander", "Yusuf", "Zanthippi"};
	std::string	name;

	name = random_names[std::rand() % 26];
	Zombie	chump(name, Type);
	std::cout << "A chump, " << name << " became a " << Type << " zombie! Oh yes!" << std::endl;
	chump.announce();

	return (chump);
}
