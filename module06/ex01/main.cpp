#include "serialize.hpp"
#include <iostream>

int	main()
{
	srand(time(NULL));

	void*	ptr;
	Data*	data;

	ptr = serialize();
	data = deserialize(ptr);

	for (int i = 0; i < 8; i++)
		std::cout << data->s1[i];
	std::cout << '\n' << data->n << '\n';
	for (int i = 0; i < 8; i++)
		std::cout << data->s2[i];
	std::cout << std::endl;
	delete data;
	return (0);
}