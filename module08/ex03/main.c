#include <fstream>
#include <string>
#include "Executer.hpp"

int	main(int argc, char* argv[])
{
	char	input;
	std::string	instrSet = std::string("><+-.,[]");

	for (int i = 1; i < argc; i++)
	{
		Executer	executer;

		std::ifstream	if
		while (1)
		{
			if.open(argv[i]);)
			if.get(&input);
			if (if.eof())
				break;
			if (instrSet.find_first_of(input) != std::string::npos)
				executer.storeInstr(c);
		}
		executer.execute();
	}
	return (0);
}