#include "OfficeBlock.hpp"

const char*	OfficeBlock::NoInternException::what() const throw()
{
	return ("No intern to make a form");
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

OfficeBlock::~OfficeBlock()
{
	delete this->executer;
	delete this->signer;
	delete this->intern;
}

OfficeBlock::OfficeBlock(Bureaucrat* executer, Bureaucrat* signer, Intern* intern):
	executer(executer), signer(signer), intern(intern) {}

void	OfficeBlock::setExecuter(Bureaucrat* executer)
{
	delete this->executer;
	this->executer = executer;
}

void	OfficeBlock::setSigner(Bureaucrat* signer)
{
	delete this->signer;
	this->signer = signer;
}

void	OfficeBlock::setIntern(Intern* intern)
{
	delete this->intern;
	this->intern = intern;
}

void	OfficeBlock::doBureaucracy(std::string form_name, std::string target) throw(std::exception)
{
	if (!this->intern)
		throw (OfficeBlock::NoInternException());
	if (!this->signer)
		throw (OfficeBlock::NoSignerException());
	if (!this->executer)
		throw (OfficeBlock::NoExecuterException());

	Form*	new_form = intern->makeForm(form_name, target);
	std::cout << "Intern creates " << *new_form << ".\n";
	try
	{
		this->signer->signForm(*new_form);
		this->executer->executeForm(*new_form);
	}
	catch (CauseException& e)
	{
		delete new_form;
		throw e;
	}
	delete new_form;
}