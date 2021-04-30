#ifndef CAUSEEXCEPTION_HPP
# define CAUSEEXCEPTION_HPP

#include <exception>
#include <string>

class	CauseException: protected std::exception
{
private:
	std::string	worker;
	std::string	cause;

public:
	CauseException();
	CauseException(std::string cause, std::string worker = "");
	std::string const&	getCause(void) const throw();
};

#endif
