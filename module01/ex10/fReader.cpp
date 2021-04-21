#include "fReader.hpp"

fReader::fReader(void) {}

fReader::fReader(std::string fileName):
	ifs(fileName) {}

fReader::fReader(char* fileName):
	ifs(fileName) {}

fReader::~fReader(void)
{
	ifs.close();
}

void	fReader::changeFile(std::string fileName)
{
	ifs.close();
	ifs.open(fileName);
}

void	fReader::changeFile(char* fileName)
{
	ifs.close();
	ifs.open(fileName);
}

void	fReader::outputFile(void)
{
	std::string	line;

	std::getline(ifs, line);
	std::cout << line;
	while (!ifs.eof())
	{
		std::cout << "\n";
		std::getline(ifs, line);
		std::cout << line;
	}
	std::cout << std::flush;
}
