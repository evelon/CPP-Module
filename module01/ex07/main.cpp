#include "pseudoSed.hpp"
#include <fstream>

int	main(int argc, char* argv[])
{
	if (argc != 4)
		return (1);

	std::fstream	infile;
	std::fstream	outfile;
	std::string		filename(argv[1]);
	std::string		line;
	pseudoSed		psed;

	infile.open(filename, std::fstream::in);
	outfile.open(filename + ".replace", std::fstream::out | std::fstream::trunc);
	while (1)
	{
		std::getline(infile, line);
		psed.setText(line);
		psed.replace(argv[2], argv[3]);
		outfile << psed.getText();
		if (infile.eof())
			break ;
		outfile << '\n';
	}
	outfile << std::flush;
	return (0);
}
