#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class	Intern
{
private:
	Form*	makeSCForm(std::string const& target) const;
	Form*	makeRRForm(std::string const& target) const;
	Form*	makePPForm(std::string const& target) const;

	class	NoSuchFormException: public CauseException
	{
		NoSuchFormException() throw();
	public:
		NoSuchFormException(std::string who, std::string deed, std::string factor) throw();
		virtual const char*	what() const throw();
	};

public:
	Intern();
	Intern(Intern const& intern);
	~Intern();
	Intern&	operator=(Intern const& intern);
	Form*	makeForm(std::string const& name, std::string const& target) throw(CauseException);
};

#endif
