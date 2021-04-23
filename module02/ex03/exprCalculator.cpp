#include "exprCalculator.hpp"

form	interpretor(std::string str)
{
	std::istringstream	iss(str);
	form				form;

	float	num;
	iss >> num;
	if (iss.rdstate == iss.good())
	{
		form.type = number;
		form.num = num;
		return (form);
	}
	if (!str.compare("+"))
	{
		form.type = operator_type;
		form.oper_type = '+';
		return (form);
	}
	if (!str.compare("-"))
	{
		form.type = operator_type;
		form.oper_type = '-';
		return (form);
	}
	if (!str.compare("*"))
	{
		form.type = operator_type;
		form.oper_type = '*';
		return (form);
	}
	if (!str.compare("/"))
	{
		form.type = operator_type;
		form.oper_type = '/';
		return (form);
	}
	if (!str.compare("("))
	{
		form.type = bracket_open;
		return (form);
	}
	if (!str.compare(")"))
	{
		form.type = bracket_close;
		return (form);
	}
	return (form);
}

Fixed	exprAdder(Fixed fixed, std::istringstream& iss)
{
	std::string	temp;

	iss >> temp;
	form form = interpretor(temp);
	if (form.type = bracket_open)
		return (fixed + exprCalculator(iss));
	if (form.type = number)
		return (fixed + Fixed(form.num));
}

Fixed	exprSubstractor(Fixed fixed, std::istringstream& iss)
{
	std::string	temp;

	iss >> temp;
	form form = interpretor(temp);
	if (form.type = bracket_open)
		return (fixed - exprCalculator(iss));

	Fixed		next(form.num);

	iss >> temp;
	form = interpretor(temp);
	return (fixed - Fixed(form.num));
}

Fixed	exprMultiplier(Fixed fixed, std::istringstream& iss)
{
	std::string	temp;

	iss >> temp;
	form form = interpretor(temp);
	if (form.type = bracket_open)
		return (fixed * exprCalculator(iss));
	if (form.type = number)
		return (fixed * Fixed(form.num));
}

Fixed	exprDivider(Fixed fixed, std::istringstream& iss)
{
	std::string	temp;

	iss >> temp;
	form form = interpretor(temp);
	if (form.type = bracket_open)
		return (fixed / exprCalculator(iss));
	if (form.type = number)
		return (fixed / Fixed(form.num));
}

Fixed	exprCalculator(Fixed fixed, std::istringstream& iss)
{
	std::string	temp;
	form		form;

	iss >> temp;

}

Fixed	exprCalculator(std::istringstream& iss)
{
	std::string	temp;
	form		form;

	iss >> temp;
	Fixed	fixed(stof(temp));
	if (iss.tellg() == -1 && !temp.compare(")"))
		return (fixed);
	iss >> temp;
	form = interpretor(temp);

	while (iss.tellg() != -1 || temp.compare(")"))
	{


	}
}