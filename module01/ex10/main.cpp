#include "fReader.hpp"

int	cat_from_cin(void)
{
	std::string	line;

	std::getline(std::cin, line);
	std::cout << line;
	while (!std::cin.eof())
	{
		std::cout << std::endl;
		std::getline(std::cin, line);
		std::cout << line;
	}
	return (0);
}

int	main(int argc, char* argv[])
{
	int	ret;

	ret = 0;
	if (argc == 1)
		return (cat_from_cin());
	else
	{
		fReader	freader;
		for (int i = 1; i < argc; i++)
		{
			freader.changeFile(argv[i]);
			if (!freader.isOpen())
			{
				std::cout << "cato9tail: " << argv[i] << ": No such file or directory" << std::endl;
				ret = 1;
			}
			else
				freader.outputFile();
		}
	}
	return (ret);
}
