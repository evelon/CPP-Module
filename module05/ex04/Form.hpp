#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include "CauseException.hpp"

class	Bureaucrat;

class	Form
{
private:
	std::string const	name;
	std::string			target;
	int const			gradeSign;
	int const			gradeExecute;
	bool				sign;
	Form();

// Constraints
	static const int	highestGrade = 1;
	static const int	lowestGrade = 150;

protected:
	void	setSign(bool sign);

	class	GradeTooHighException: public CauseException
	{
	public:
		GradeTooHighException();
		GradeTooHighException(std::string cause);
		virtual const char*	what() const throw();
	};
	class	GradeTooLowException: public CauseException
	{
	public:
		GradeTooLowException();
		GradeTooLowException(std::string cause);
		virtual const char*	what() const throw();
	};
	class	FormNotSignedException: public std::exception
	{
	public:
		virtual const char*	what() const throw();
	};

public:
	Form(std::string name, std::string target, int grade_sign, int grade_exec);
	Form(Form const& form);
	virtual ~Form();
	Form&	operator=(Form const& form);

// Getters
	std::string const&	getName(void) const;
	std::string	const&	getTarget(void) const;
	int const&			getGradeSign(void) const;
	int const&			getGradeExecute(void) const;
	bool const&			isSigned(void) const;
	void				setTarget(std::string target);

	void				beSigned(Bureaucrat const& brcrt);
	virtual void		execute(Bureaucrat const& brcrt) const throw(std::exception)= 0;
};

std::ostream&	operator<<(std::ostream& os, Form const& form);

#endif
