#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade):
	name(name)
{
	if (grade < Bureaucrat::highestGrade)
		throw Bureaucrat::GradeTooHighException();
	if (grade > Bureaucrat::lowestGrade)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const& brcrt):
	name(brcrt.name), grade(brcrt.grade) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& brcrt)
{
	this->grade = brcrt.grade;
	return (*this);
}

std::string const&	Bureaucrat::getName(void) const
{
	return (this->name);
}

int const&	Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void	Bureaucrat::upGrade(void)
{
	std::cout << "Try incrementation.\n";
	if (this->grade == this->highestGrade)
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
}

void	Bureaucrat::downGrade(void)
{
	std::cout << "Try decrementation.\n";
	if (this->grade == this->lowestGrade)
		throw Bureaucrat::GradeTooLowException();
	this->grade++;
}

void	Bureaucrat::signForm(Form& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << '<' << this->name << "> signs <" << form.getName() << ">\n";
	}
	catch (std::exception& e)
	{
		std::cerr << '<' << this->name << "> cannot sign <" << form.getName() \
		<< "> because <" << e.what() << ">.\n";
	}
}

//==============================================================================
// exceptions

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high.");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low.");
}

//==============================================================================
// ostream overload

std::ostream&	operator<<(std::ostream& os, Bureaucrat const& brcrt)
{
	os << '<' << brcrt.getName() << ">, bureaucrat grade <" << brcrt.getGrade() << ">\n";
	return (os);
}
