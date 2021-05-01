#include "CentralBureaucracy.hpp"

CentralBureaucracy::CentralBureaucracy():
	brcrtQ(BRCRT_MAX, CentralBureaucracy::TooManyBureaucratException(), CentralBureaucracy::NoBureaucratException()),
	targetQ(TARGET_MAX, CentralBureaucracy::TooManyTargetException(), CentralBureaucracy::NoTargetException())
{}


CentralBureaucracy::~CentralBureaucracy() {}

void	CentralBureaucracy::feedBureaucrat(Bureaucrat* brcrt) throw(std::exception)
{
	static int	n = 0;
	this->brcrtQ.enq(brcrt);
	if (n++ < 40)
	{
		if (!(n % 2))
		{
			this->blocks[n / 2].setIntern(new Intern());
			this->blocks[n / 2].setSigner(brcrt);
		}
		else
			this->blocks[n / 2].setExecuter(brcrt);
	}
}

void	CentralBureaucracy::queueUp(std::string name) throw(std::exception)
{
	this->targetQ.enq(name);
}

void	CentralBureaucracy::doBureaucracy(void) throw(std::exception)
{
	static int	n = 0;
	static std::string	forms[4] = {FORM1, FORM2, FORM3, FORM4};

	std::string temp = this->targetQ.deq();
	try
	{
		this->blocks[n].doBureaucracy(forms[rand() % 4], temp);
	}
	catch(const CauseException& e)
	{
		std::cerr << e.getCircumstance() << e.what() << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << '\n';
}

const char*	CentralBureaucracy::TooManyBureaucratException::what() const throw()
{
	return ("Too many bureaucrat in the central bureaucracy.");
}

const char*	CentralBureaucracy::NoBureaucratException::what() const throw()
{
	return ("No Bureaucrat in the central bureaucracy");
}

const char*	CentralBureaucracy::TooManyTargetException::what() const throw()
{
	return ("Too many petitioners in the central bureaucracy");
}
const char*	CentralBureaucracy::NoTargetException::what() const throw()
{
	return ("No petitioner in the central bureaucracy");
}