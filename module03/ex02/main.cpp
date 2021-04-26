#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	FragTrap("1");
	std::cout << '\n';
	ScavTrap("2");
	std::cout << '\n';

	FragTrap ft("1");
	std::cout << '\n';
	ScavTrap st("2");
	std::cout << '\n';

	return (0);
}