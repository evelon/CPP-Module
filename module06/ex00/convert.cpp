#include <iostream>
#include <string>
#include <ctype.h>

int	toChar(std::string input)
{
	std::cout << "char: ";

	int	i;
	try
	{
		i = std::stoi(input);
	}
	catch(...)
	{
		std::cout << "impossible\n";
	}

	if (i < -128 || i > 127)
	{
		std::cout << "impossible";
	}

	char*	c;
	c = reinterpret_cast<char*>(&i);
}

int	main(int argc, char* argv[])
{
	if (argc != 2)
		return (1);
}