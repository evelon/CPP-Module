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

		std::ifstream	ifs;
		ifs.open(argv[i]);
		while (1)
		{
			ifs.get(input);
			if (ifs.eof())
				break;
			if (instrSet.find_first_of(input) != std::string::npos)
				executer.storeInstr(input);
		}
		executer.execute();
	}
	return (0);
}