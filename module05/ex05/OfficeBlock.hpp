#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP

# include "Bureaucrat.hpp"
# include "Intern.hpp"

class	OfficeBlock
{
private:
	Bureaucrat*	executer;
	Bureaucrat*	signer;
	Intern*		intern;

	OfficeBlock(OfficeBlock const&);
	OfficeBlock&	operator=(OfficeBlock const&);

	class	NoInternException: public std::exception
	{
		virtual const char*	what() const throw();
	};
	class	NoSignerException: public std::exception
	{
		virtual const char*	what() const throw();
	};
	class	NoExecuterException: public std::exception
	{
		virtual const char*	what() const throw();
	};

public:
	OfficeBlock();
	~OfficeBlock();
	OfficeBlock(Bureaucrat* executer, Bureaucrat* signer, Intern* intern);
	void	setExecuter(Bureaucrat* executer);
	void	setSigner(Bureaucrat* signer);
	void	setIntern(Intern* intern);
	void	doBureaucracy(std::string form_name, std::string target) throw(std::exception);
};

#endif
