#ifndef CAUSEEXCEPTION_HPP
# define CAUSEEXCEPTION_HPP

#include <exception>
#include <string>

class	CauseException: public std::exception
{
private:
	std::string	who;
	std::string	deed;
	std::string	factor;
	CauseException() throw();

public:
	virtual ~CauseException() throw();
	CauseException(std::string who, std::string deed, std::string factor) throw();
	std::string	getCircumstance(void) const throw();
	virtual const char* what(void) const throw();
};

#endif
