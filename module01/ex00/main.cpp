#include "Pony.hpp"
#include <unistd.h>

int	main()
{
	int			legs;
	std::string	dump;

	std::cout << "How many legs does a pony have?" << std::endl;
	std::cin >> legs;
	if (!std::cin)
	{
		std::cin >> dump;
		std::cout << "Can a pony have " << dump << " number of legs? I doubt." << std::endl;
		return (1);
	}
	if (legs < 0)
	{
		std::cout << "A pony with " << legs << \
		" number of legs! They are not common external legs. The pony has " \
		<< -1 * legs << " internal leg";
		if (legs != -1)
		std::cout << 's';
		std::cout << "!" << std::endl;
	}
	ponyOnTheStack(legs);
	sleep(4);
	std::cout << "Oh noes, Another pony appeared! It also has " << legs << " leg";
	if (legs != 1)
		std::cout << 's';
	std::cout << "!" << std::endl;
	ponyOnTheHeap(legs);
	system("leaks a.out >> leaks");
	return (0);
}