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
	try
	{
		if (!this->isSigned())
			throw Form::FormNotSigned();
		if (brcrt.getGrade() > this->getGradeExecute())
			throw Form::GradeTooLowException();
	}
	catch (const std::exception& e)
	{
		std::cerr << '<' << brcrt.getName() << "> cannot execute <" << this->getName() \
		<< ">:" << this->getTarget() << " because <" << e.what() << ">.\n";
		return ;
	}

	std::cout << '<' << this->getTarget() << "> has been pardoned by Zafod Beeblebrox.\n";
}