#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class	Bureaucrat
{
private:
	std::string const	name;
	int					grade;
	static const int	highestGrade = 1;
	static const int	lowestGrade = 150;

public:
	Bureaucrat(std::string name = "Bureaucrat");
	Bureaucrat(Bureaucrat const& brcrt);
	~Bureaucrat();
	Bureaucrat&	operator=(Bureaucrat const& brcrt);

	std::string const&	getName(void);
	int const&			getGrade(void);
};

#endif
