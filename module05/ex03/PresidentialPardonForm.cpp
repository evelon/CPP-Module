#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target):
	Form(
		"Presidential Pardon Form",
		target,
		PresidentialPardonForm::gradeSign,
		PresidentialPardonForm::executeSign
		)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& ppf):
	Form(
		"Presidential Pardon Form",
		ppf.getTarget(),
		PresidentialPardonForm::gradeSign,
		PresidentialPardonForm::executeSign
		)
{
	this->setSign(ppf.isSigned());
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const& ppf)
{
	this->setSign(ppf.isSigned());
	this->setTarget(ppf.getTarget());
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const& brcrt) const
{
	if (!this->isSigned())
		throw Form::FormNotSigned();
	if (brcrt.getGrade() > this->getGradeExecute())
		throw Form::GradeTooLowException();
	std::cout << '<' << this->getTarget() << "> has been pardoned by Zafod Beeblebrox.\n";
}