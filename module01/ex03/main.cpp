#include "ZombieHorde.hpp"
#include <iostream>

int	main()
{
	std::srand(time(NULL));

	std::string	input;
	int			n;

	std::cout << "I think some zombies are approaching. Can you see how many they are?" << std::endl;
	std::cin >> input;

	srand(time(NULL));
	n = rand() % 14 + 12;
	std::cout << "Oh no, there are " << n << " of zombies approaching!" << std::endl;

	ZombieHorde	horde(n);
	horde.announce();
	return (0);
}