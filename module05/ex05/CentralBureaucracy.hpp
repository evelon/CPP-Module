#ifndef CENTRALBUREAUCRACY_HPP
# define CENTRALBUREAUCRACY_HPP

# include "OfficeBlock.hpp"
# include "exQueue.hpp"

# define BRCRT_MAX 2047
# define TARGET_MAX 32767

# define FORM1 "Presidential Pardon Form"
# define FORM2 "Robotomy Request Form"
# define FORM3 "Shrubbery Creation Form"
# define FORM4 "Mutant Pig Termination Form"

class	CentralBureaucracy
{
private:
	exQueue<Bureaucrat*>	brcrtQ;
	exQueue<std::string>	targetQ;
	OfficeBlock		blocks[20];

	CentralBureaucracy(CentralBureaucracy const&);
	CentralBureaucracy&	operator=(CentralBureaucracy const&);

	class	TooManyBureaucratException: public std::exception
	{
		virtual const char* what() const throw();
	};
	class	NoBureaucratException: public std::exception
	{
		virtual const char* what() const throw();
	};
	class	TooManyTargetException: public std::exception
	{
		virtual const char* what() const throw();
	};
	class	NoTargetException: public std::exception
	{
		virtual const char* what() const throw();
	};
public:
	CentralBureaucracy();
	~CentralBureaucracy();
	void	feedBureaucrat(Bureaucrat* brcrt) throw(std::exception);
	void	queueUp(std::string name) throw(std::exception);
	void	doBureaucracy(void) throw(std::exception);
};

#endif
