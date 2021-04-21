#include "Logger.hpp"

int	main()
{
	std::string	input;

	std::cout << "Name a log file." << std::endl;
	std::getline(std::cin, input);

	Logger logger(input + ".log");
	std::cout << "Make lines for logs to the console" << std::endl;
	for (int i = 0; i < 3; i++)
	{
		std::getline(std::cin, input);
		logger.log("Console", input);
	}
	std::cout << "Make lines for logs to the file" << std::endl;
	for (int i = 0; i < 3; i++)
	{
		std::getline(std::cin, input);
		logger.log("File", input);
	}
	return (0);
}
