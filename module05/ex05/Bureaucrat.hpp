#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

# include "Form.hpp"
# include "CauseException.hpp"

class	Form;

class	Bureaucrat
{
private:
	std::string const	name;
	int					grade;
	static const int	highestGrade = 1;
	static const int	lowestGrade = 150;
	Bureaucrat();

	class	GradeTooHighException: public CauseException
	{
		GradeTooHighException() throw();
	public:
		GradeTooHighException(std::string who, std::string deed, std::string factor) throw();
		virtual const char* what() const throw();
	};

	class	GradeTooLowException: public CauseException
	{
		GradeTooLowException() throw();
	public:
		GradeTooLowException(std::string who, std::string deed, std::string factor) throw();
		virtual const char* what() const throw();
	};

public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const& brcrt);
	~Bureaucrat();
	Bureaucrat&	operator=(Bureaucrat const& brcrt);

	std::string const&	getName(void) const;
	int const&			getGrade(void) const;
	void				upGrade(void);
	void				downGrade(void);
	void				signForm(Form& form);
	void				executeForm(Form const& form) throw(CauseException);
};

std::ostream&	operator<<(std::ostream& os, Bureaucrat const& brcrt);

#endif
