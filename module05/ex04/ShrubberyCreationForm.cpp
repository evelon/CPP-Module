#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
	Form(
		"Shrubbery Creation Form",
		target,
		ShrubberyCreationForm::gradeSign,
		ShrubberyCreationForm::executeSign
		)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& scf):
	Form(
		"Shrubbery Creation Form",
		scf.getTarget(),
		ShrubberyCreationForm::gradeSign,
		ShrubberyCreationForm::executeSign
		)
{
	this->setSign(scf.isSigned());
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const& scf)
{
	this->setSign(scf.isSigned());
	this->setTarget(scf.getTarget());
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const& brcrt) const throw(std::exception)
{
	if (!this->isSigned())
		throw Form::FormNotSignedException();
	if (brcrt.getGrade() > this->getGradeExecute())
		throw Form::GradeTooLowException();

	std::ofstream	ofs;

	ofs.open(this->getTarget() + "_shrubbery", std::ios::out | std::ios::trunc);
	ofs << TREES;
	ofs.close();
}