#include "exprCalculator.hpp"

int main(int argc, char* argv[])
{
	std::string			temp;
	std::stringstream	ss;
	int					ret;

	ret = 0;
	if (argc == 1)
		return (ret);
	for (int i = 1; i < argc; i++)
	{
		temp = std::string(argv[i]);
		exprParser	expar(temp);
		if (!expar.endParse())
		{
			std::cout << "Error: invalid expression" << std::endl;
			ret = 1;
			continue;
		}
		std::istringstream	iss(argv[i]);
		postfixTranslator(ss, iss);
		std::cout << postfixCalculator(ss) << std::endl;
		ss.str(std::string());
	}
	return (ret);
}