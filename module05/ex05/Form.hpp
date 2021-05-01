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
		GradeTooHighException() throw();
	public:
		GradeTooHighException(std::string who, std::string deed, std::string factor) throw();
		virtual const char*	what() const throw();
	};
	class	GradeTooLowException: public CauseException
	{
		GradeTooLowException() throw();
	public:
		GradeTooLowException(std::string who, std::string deed, std::string factor) throw();
		virtual const char*	what() const throw();
	};
	class	FormNotSignedException: public CauseException
	{
		FormNotSignedException() throw();
	public:
		FormNotSignedException(std::string who, std::string deed, std::string factor) throw();
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

	void				beSigned(Bureaucrat const& brcrt) throw(CauseException);
	virtual void		execute(Bureaucrat const& brcrt) const throw(CauseException) = 0;
};

std::ostream&	operator<<(std::ostream& os, Form const& form);

#endif
