#ifndef FREADER_HPP
# define FREADER_HPP

# include <string>
# include <fstream>
# include <iostream>

class	fReader
{
private:
	std::ifstream	ifs;

public:
	fReader(void);
	fReader(std::string fileName);
	fReader(char* fileName);
	~fReader(void);
	void	changeFile(std::string fileName);
	void	changeFile(char* fileName);
	bool	isOpen(void);
	void	outputFile(void);
};


#endif
