#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include "Form.hpp"

class	Form;

class	Bureaucrat
{
private:
	std::string const	name;
	int					grade;
	static const int	highestGrade = 1;
	static const int	lowestGrade = 150;
	Bureaucrat();

	class	GradeTooHighException: public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

	class	GradeTooLowException: public std::exception
	{
	public:
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
	void				executeForm(Form const& form);
};

std::ostream&	operator<<(std::ostream& os, Bureaucrat const& brcrt);

#endif
