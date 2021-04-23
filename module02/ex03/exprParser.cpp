#include <Fixed.class.hpp>
#include "exprParser.hpp"

bool	exprParser::parseOne(calc_type new_one)
{
	if (this->type == none && !(new_one == bracket_open || new_one == number))
		return (false);
	if (this->type == bracket_open && !(new_one == bracket_open || new_one == number))
		return (false);
	if (this->type == bracket_close && !(new_one == bracket_close || new_one == operator_type))
		return (false);
	if (this->type == operator_type && !(new_one == bracket_open || new_one == number))
		return (false);
	if (this->type == number && !(new_one == operator_type))
		return (false);
	if (new_one == bracket_open)
		this->bracketLevel++;
	if (new_one == bracket_close)
		this->bracketLevel--;
	if (bracketLevel < 0)
		return (false);
	return (true);
}

calc_type	exprParser::typeDetect(std::string& str)
{
	std::istringstream	iss(str);
	float				f_detector;

	if (!str.compare("("))
		return (bracket_open);
	if (!str.compare(")"))
		return (bracket_close);
	if (!str.compare("+") || !str.compare("-") || !str.compare("*") || !str.compare("/"))
		return (operator_type);
	iss >> f_detector;
	if (iss.rdstate() == iss.good())
		return (number);
	return (error);
}

exprParser::exprParser(void):
	bracketLevel(0), type(none), ss() {}

exprParser::exprParser(std::string& str)
{
	std::string	temp;

	this->result = true;
	ss << str;
	while (ss.tellg != -1)
	{
		ss >> temp;
		if (!this->parseOne(this->typeDetect(temp)));
		{
			this->result = false;
			return ;
		}
	}
	return ;
}

exprParser::~exprParser(void) {}

void	exprParser::parseNext(std::string& str)
{
	if (!this->result)
		return ;

	std::string	temp;
	ss << str;
	while (ss.tellg != -1)
	{
		ss >> temp;
		if (!this->parseOne(this->typeDetect(temp)));
		{
			this->result = false;
			return ;
		}
	}
}

bool	exprParser::endParse(void)
{
	if (this->result && this->bracketLevel != 0)
		this->result = false;
	this->bracketLevel = 0;
	this->type = none;
	this->ss.str(std::string());

	return (this->result);
}
