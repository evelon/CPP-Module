#include "Fixed.class.hpp"
#include "exprParser.hpp"
#include <string>
#include <sstream>

typedef	struct t_form
{
	calc_type	type;
	char		oper_type;
	Fixed		num;
}				form;

form	interpretor(std::string str);
Fixed	exprMultiplier(Fixed fixed, std::istringstream& iss);
Fixed	exprCalculator(std::istringstream& iss);

Fixed	exprCalc
