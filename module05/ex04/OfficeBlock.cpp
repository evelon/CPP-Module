#include "OfficeBlock.hpp"

const char*	OfficeBlock::NoInternException::what() const throw()
{
	return ("No inter to make a form");
}

const char*	OfficeBlock::NoSignerException::what() const throw()
{
	return ("No bureaucrat to sign a form");
}

const char*	OfficeBlock::NoExecuterException::what() const throw()
{
	return ("No bureaucrat to execute a form");
}

OfficeBlock::OfficeBlock():
	executer(NULL), signer(NULL), intern(NULL) {}

OfficeBlock::OfficeBlock(Bureaucrat* executer, Bureaucrat* signer, Intern* intern):
	executer(executer), signer(signer), intern(intern) {}

void	OfficeBlock::setExecuter(Bureaucrat* executer)
{
	this->executer = executer;
}

void	OfficeBlock::setSigner(Bureaucrat* signer)
{
	this->signer = signer;
}

void	OfficeBlock::setIntern(Intern* intern)
{
	this->intern = intern;
}

void	OfficeBlock::doBureaucracy(std::string form_name, std::string target)
{
	try
	{
		if (!this->intern)
			throw (OfficeBlock::NoInternException());
		if (!this->signer)
			throw (OfficeBlock::NoSignerException());
		if (!this->executer)
			throw (OfficeBlock::NoExecuterException());

		Form*	new_form = intern->makeForm(form_name, target);
		std::cout << "Intern creates " << *new_form << ".\n";
		this->signer->executeForm(*new_form);
	}
	catch(const std::exception& e)
	{
		std::cerr << "This officeblock cannot handle the form, " << form_name \
		<< " with the target, " << target << ", because <" <<e.what() << ">\n";
	}


}