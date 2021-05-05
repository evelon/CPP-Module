#include "iter.hpp"
#include <stdlib.h>
#include <time.h>
#include <string>

int	main()
{
	srand(time(NULL));
	char	alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	iter(alphabet, 26, print);
	std::cout << '\n';

	int		numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	iter(numbers, 10, print);
	std::cout << '\n';
	iter(numbers, 10, double_it);
	iter(numbers, 10, print);
	std::cout << '\n';

	std::string	strings[] = {
		"hello",
		"world",
		"42",
		"seoul",
		"mala",
		"xiangguo"
	};

	iter(strings, 6, print);
	std::cout << '\n';
	iter(strings, 6, double_it);
	iter(strings, 6, print);
	std::cout << '\n';
	return (0);
}