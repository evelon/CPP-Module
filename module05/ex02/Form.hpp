#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{
private:
	std::string const	name;
	int const			gradeSign;
	int const			gradeExecute;
	bool				sign;
	Form();

// Constraints
	static const int	highestGrade = 1;
	static const int	lowestGrade = 150;

public:
	Form(std::string name, int grade_sign, int grade_exec);
	Form(Form const& form);
	~Form();
	Form&	operator=(Form const& form);

// Getters
	std::string const&	getName(void) const;
	int const&			getGradeSign(void) const;
	int const&			getGradeExecute(void) const;
	bool const&			isSigned(void) const;

	void				beSigned(Bureaucrat const& brcrt);

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
};

std::ostream&	operator<<(std::ostream& os, Form const& form);

#endif
