#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade):
	name(name)
{
	if (grade < Bureaucrat::highestGrade)
		throw Bureaucrat::GradeTooHighException(this->name, "become a bureaucrat", "the grade set");
	if (grade > Bureaucrat::lowestGrade)
		throw Bureaucrat::GradeTooLowException(this->name, "become a bureaucrat", "the grade set");
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
		throw Bureaucrat::GradeTooHighException(this->name + "'s grade", "be incremented", "the grade");
	this->grade--;
}

void	Bureaucrat::downGrade(void)
{
	std::cout << "Try decrementation.\n";
	if (this->grade == this->lowestGrade)
		throw Bureaucrat::GradeTooLowException(this->name + "'s grade", "be decremented", "the grade");
	this->grade++;
}

void	Bureaucrat::signForm(Form& form)
{
	form.beSigned(*this);
	std::cout << '<' << this->name << "> signs <" << form.getName() << ">:" \
		<< form.getTarget() << "\n";
}

void	Bureaucrat::executeForm(Form const& form) throw(CauseException)
{

	form.execute(*this);
	std::cout << '<' << this->name << "> executes <" << form.getName() << ">:" \
		<< form.getTarget() << ".\n";
}

//==============================================================================
// exceptions

Bureaucrat::GradeTooHighException::GradeTooHighException\
(std::string who, std::string deed, std::string factor) throw():
	CauseException(who, deed, factor) {}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("is too high.");
}

Bureaucrat::GradeTooLowException::GradeTooLowException\
(std::string who, std::string deed, std::string factor) throw():
	CauseException(who, deed, factor) {}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("is too low.");
}

//==============================================================================
// ostream overload

std::ostream&	operator<<(std::ostream& os, Bureaucrat const& brcrt)
{
	os << '<' << brcrt.getName() << ">, bureaucrat grade <" << brcrt.getGrade() << ">\n";
	return (os);
}
