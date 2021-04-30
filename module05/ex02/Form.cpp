#include "Form.hpp"

Form::Form(std::string name, int grade_sign, int grade_exec):
	name(name), gradeSign(grade_sign), gradeExecute(grade_exec), sign(false)
{
	if (grade_sign < highestGrade)
		throw Form::GradeTooHighException();
	if (grade_sign > lowestGrade)
		throw Form::GradeTooLowException();
	if (grade_exec < highestGrade)
		throw Form::GradeTooHighException();
	if (grade_exec > lowestGrade)
		throw Form::GradeTooLowException();
}

Form::Form(Form const& form):
	name(form.name),
	gradeSign(form.gradeSign),
	gradeExecute(form.gradeExecute),
	sign(form.sign)
{}

Form::~Form() {}

Form&	Form::operator=(Form const& form)
{
	this->sign = form.sign;
	return (*this);
}

std::string const&	Form::getName(void) const
{
	return (this->name);
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

void				Form::beSigned(Bureaucrat const& brcrt)
{
	if (brcrt.getGrade() > this->gradeSign)
		throw (Form::GradeTooLowException());
	this->sign = true;
}

//==============================================================================
// exceptions

const char* Form::GradeTooHighException::what() const throw()
{
	return ("the grade is too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("the grade is too low");
}

// ostream overload

std::ostream&	operator<<(std::ostream& os, Form const& form)
{
	os << "<" << form.getName() << "> requires a grade of " << form.getGradeSign() \
	<< " grade to be signed and a grade of " << form.getGradeExecute() << \
	" to be executed, and it is ";
	if (form.isSigned() == false)
		os << "not ";
	os << "signed.\n";
	return (os);
}
