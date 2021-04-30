#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name):
	name(name) {}

Bureaucrat::Bureaucrat(Bureaucrat const& brcrt):
	name(brcrt.name), grade(brcrt.grade) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& brcrt)
{
	this->grade = brcrt.grade;
}