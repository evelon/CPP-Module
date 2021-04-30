#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

# include "GradeTooHighException.hpp"
# include "GradeTooLowException.hpp"

class	Bureaucrat
{
private:
	std::string const	name;
	int					grade;
	static const int	highestGrade = 1;
	static const int	lowestGrade = 150;
	Bureaucrat();

public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const& brcrt);
	~Bureaucrat();
	Bureaucrat&	operator=(Bureaucrat const& brcrt);

	std::string const&	getName(void);
	int const&			getGrade(void);

	GradeTooHighException		GradeTooHighException;
	GradeTooLowException		GradeTooLowException
};

#endif
