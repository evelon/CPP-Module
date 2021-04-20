#include "Human.hpp"

int	main()
{
	Human	human;
	std::string	name;

	std::cout << "What is your name?" << std::endl;
	std::getline(std::cin, name);
	human.action("meleeAttack", name);
	human.action("rangedAttack", name);
	human.action("intimidatingShout", name);
	return (0);
}
