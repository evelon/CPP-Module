#include "Intern.hpp"

Form*	Intern::makeSCForm(std::string const& target) const
{
	return (new ShrubberyCreationForm(target));
}

Form*	Intern::makeRRForm(std::string const& target) const
{
	return (new RobotomyRequestForm(target));
}

Form*	Intern::makePPForm(std::string const& target) const
{
	return (new PresidentialPardonForm(target));
}

Intern::Intern() {}

Intern::Intern(Intern const& intern)
{
	(void)intern;
}

Intern::~Intern() {}

Intern&	Intern::operator=(Intern const& intern)
{
	(void)intern;
	return (*this);
}

Form*	Intern::makeForm(std::string name, std::string target) throw(std::exception)
{
	std::string	form_names[3] = \
	{
		"Presidential Pardon Form",
		"Robotomy Request Form",
		"Shrubbery Creation Form"
	};
	Form*	(Intern::* form_makes[3])(std::string const&) const = \
	{
		&Intern::makeSCForm,
		&Intern::makeRRForm,
		&Intern::makePPForm
	};

	for (int i = 0; i < 3; i++)
	{
		if (!form_names[i].compare(name))
			return ((this->*form_makes[i])(target));
	}
	throw (Intern::NoSuchForm());
}

const char*	Intern::NoSuchForm::what() const throw()
{
	return ("no such form exists");
}