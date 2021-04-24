#ifndef EXPRPARSER_HPP
# define EXPRPARSER_HPP

#include <string>
#include <sstream>

enum calc_type
{
	error = -1,
	none,
	bracket_open,
	bracket_close,
	operator_type,
	addition,
	subtraction,
	multiplication,
	division,
	number
};

class exprParser
{
private:
	int					bracketLevel;
	calc_type			type;
	std::stringstream	ss;
	bool				result;

	bool		parseOne(calc_type new_one);
	calc_type	typeDetect(std::string& str);

public:
	exprParser(void);
	exprParser(std::string& str);
	~exprParser(void);
	bool	endParse(void);
};

#endif