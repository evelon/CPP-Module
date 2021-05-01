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

Form*	Intern::makeForm(std::string const& name, std::string const& target) throw(CauseException)
{
	static std::string	form_names[3] = \
	{
		"Shrubbery Creation Form",
		"Robotomy Request Form",
		"Presidential Pardon Form",
	};
	static Form*	(Intern::* form_makes[3])(std::string const&) const = \
	{
		&Intern::makeSCForm,
		&Intern::makeRRForm,
		&Intern::makePPForm
	};

	for (int i = 0; i < 3; i++)
	{
		if (!name.compare(form_names[i]))
			return ((this->*form_makes[i])(target));
	}
	throw (Intern::NoSuchFormException("Intern", "make the form", ""));
}

Intern::NoSuchFormException::NoSuchFormException(std::string who, std::string deed, std::string factor) throw():
	CauseException(who, deed, factor) {}

const char*	Intern::NoSuchFormException::what() const throw()
{
	return ("no such form exists");
}