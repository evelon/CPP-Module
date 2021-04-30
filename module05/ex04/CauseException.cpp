#include "CauseException.hpp"

CauseException::CauseException():
	cause() {}

CauseException::CauseException(std::string cause, std::string worker):
	cause(cause), worker(worker) {}

std::string const&	CauseException::getCause(void) const throw()
{
	return (this->cause);
}
