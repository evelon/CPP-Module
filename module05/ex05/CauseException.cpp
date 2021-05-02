#include "CauseException.hpp"

CauseException::~CauseException() throw() {}

CauseException::CauseException(std::string who, std::string deed, std::string factor) throw():
	who(who), deed(deed), factor(factor) {}

std::string	CauseException::getCircumstance(void) const throw()
{
	return (this->who + " cannot " + this->deed + " because " + this->factor);
}

const char* CauseException::what(void) const throw()
{
	return ("CauseException");
}