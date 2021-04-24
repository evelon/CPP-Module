#include "FragTrap.hpp"
#include "Point.hpp"

void	no_such_entry(void)
{
	std::cout << "No such entry." << std::endl;
}

int	main(void)
{
	srand(time(NULL));

	std::string	input;
	std::cout << "What is your name?" << std::endl;
	std::getline(std::cin, input);
	if (std::cin.eof())
		return (1);
	std::string	target(input);

	std::cout << "Here is a fragtrap. what is its name?" << std::endl;
	std::getline(std::cin, input);
	if (std::cin.eof())
		return (1);
	FragTrap	fragtrap(input);

	std::cout << "Now the fragtrap <" << fragtrap.getName() << "> is on the ground." << std::endl;

	int	select;
	while (1)
	{
		std::cout << "\nWhat is the fragtrap doing?\n" \
		<< "0. Do nothing.\n" \
		<< "1. Ranged attack.\n" \
		<< "2. Melee attack.\n" \
		<< "3. Random attack.\n" \
		<< "4. Taking damage.\n" \
		<< "5. Being repaired." << std::endl;
		std::cin >> select;
		if (std::cin.eof())
			return (1) ;
		if (std::cin.fail())
			no_such_entry();
		switch (select)
		{
			case	0:
				return (0);
			case	1:
				fragtrap.rangedAttack(target);
				break ;
			case	2:
				fragtrap.meleeAttack(target);
				break ;
			case	3:
				fragtrap.vaulthunter_dot_exe(target);
				break ;
			case	4:
				std::cout << "How much damage does it get?" << std::endl;
				std::cin >> select;
				if (std::cin.eof())
					return (1);
				if (std::cin.fail() || select < 0)
					select = 0;
				fragtrap.takeDamage(select);
				break ;
			case	5:
				std::cout << "How much HP does it get repaired?" << std::endl;
				std::cin >> select;
				if (std::cin.eof())
					return (1);
				if (std::cin.fail() || select < 0)
					select = 0;
				fragtrap.beRepaired(select);
				break ;
			default:
				no_such_entry();
		}
	}
}