#include "ZombieEvent.hpp"
#include <iostream>

int	main()
{
	std::string	input;

	std::cout << "What kind of zombie you like?" << std::endl;
	std::cin >> input;
	ZombieEvent::setZombieType(input);

	std::cout << "What is your name?" << std::endl;
	std::cin >> input;

	delete ZombieEvent::newZombie(input);

	Zombie*		zombieptr = ZombieEvent::newZombie(std::string("Kinder"));
	Zombie		zombie = ZombieEvent::randomChump();
	ZombieEvent::randomChump();
	zombie = ZombieEvent::randomChump();
	ZombieEvent::randomChump();
	delete zombieptr;
	return (0);
}