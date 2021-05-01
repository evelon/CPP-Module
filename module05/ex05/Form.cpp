#include "Form.hpp"

void	Form::setSign(bool sign)
{
	this->sign = sign;
}

Form::Form(std::string name, std::string target, int grade_sign, int grade_exec):
	name(name), target(target), gradeSign(grade_sign), gradeExecute(grade_exec), sign(false)
{
	if (grade_sign < highestGrade)
		throw Form::GradeTooHighException("Form", "be made", "g.sign ");
	if (grade_sign > lowestGrade)
		throw Form::GradeTooLowException("Form", "be made", "g.sign ");
	if (grade_exec < highestGrade)
		throw Form::GradeTooHighException("Form", "be made", "g.execute ");
	if (grade_exec > lowestGrade)
		throw Form::GradeTooLowException("Form", "be made", "g.execute ");
}

Form::Form(Form const& form):
	name(form.name),
	target(form.target),
	gradeSign(form.gradeSign),
	gradeExecute(form.gradeExecute),
	sign(form.sign)
{}

Form::~Form() {}

Form&	Form::operator=(Form const& form)
{
	this->sign = form.sign;
	this->target = form.target;
	return (*this);
}

std::string const&	Form::getName(void) const
{
	return (this->name);
}

std::string const&	Form::getTarget(void) const
{
	return (this->target);
}

int const&			Form::getGradeSign(void) const
{
	return (this->gradeSign);
}

int const&			Form::getGradeExecute(void) const
{
	return (this->gradeExecute);
}

bool const&			Form::isSigned(void) const
{
	return (this->sign);
}

void	Form::setTarget(std::string target)
{
	this->target = target;
}


void				Form::beSigned(Bureaucrat const& brcrt) throw(CauseException)
{
	if (brcrt.getGrade() > this->gradeSign)
		throw (Form::GradeTooLowException(brcrt.getName(), "sign the form", "the grade of the bureaucrat "));
	this->sign = true;
}

//==============================================================================
// exceptions

Form::GradeTooHighException::GradeTooHighException(std::string who, std::string deed, std::string factor) throw():
	CauseException(who, deed, factor) {}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("is too high");
}

Form::GradeTooLowException::GradeTooLowException(std::string who, std::string deed, std::string factor) throw():
	CauseException(who, deed, factor) {}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("is too low");
}

Form::FormNotSignedException::FormNotSignedException(std::string who, std::string deed, std::string factor) throw():
	CauseException(who, deed, factor) {}

const char*	Form::FormNotSignedException::what() const throw()
{
	return ("is not signed");
}

// ostream overload

std::ostream&	operator<<(std::ostream& os, Form const& form)
{
	os << "<" << form.getName() << ">:" << form.getTarget() << ", (g.execute:" << form.getGradeExecute() \
	<< " / g.sign" << form.getGradeSign() << \
	"): ";
	if (form.isSigned() == false)
		os << "un";
	os << "signed";
	return (os);
}
