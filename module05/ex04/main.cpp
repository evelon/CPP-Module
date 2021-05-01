#include "OfficeBlock.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#define PPF "Presidential Pardon Form"
#define RRF "Robotomy Request Form"
#define SCF "Shrubbery Creation Form"

void	test(OfficeBlock& ob, std::string name, std::string target)
{
	try
	{
		ob.doBureaucracy(name, target);
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

int	main()
{
	srand(time(NULL));

	try
	{
		OfficeBlock	ob1;
		test(ob1, "test", "target");
		ob1.setIntern(new Intern());
		test(ob1, SCF, "target");
		ob1.setSigner(new Bureaucrat("crate", 135));
		test(ob1, PPF, "target");
		ob1.setExecuter(new Bureaucrat("brave", 128));
		test(ob1, RRF, "intern");
		ob1.setSigner(new Bureaucrat("delv", 115));
		test(ob1, SCF, "intern");
		test(ob1, RRF, "tarte");
		ob1.setSigner(new Bureaucrat("elo", 66));
		test(ob1, RRF, "tarte");
		ob1.setExecuter(new Bureaucrat("forte", 33));
		test(ob1, RRF, "tarte");
		test(ob1, PPF, "coyote");
		ob1.setSigner(new Bureaucrat("grave", 22));
		test(ob1, PPF, "coyote");
		ob1.setExecuter(new Bureaucrat("holymoly", 2));
		test(ob1, PPF, "coyote");
		test(ob1, "noname", "cra");

		OfficeBlock	ob(
			new Bureaucrat("ionia", 1),
			new Bureaucrat("jolim", 2),
			new Intern()
		);
		test(ob, PPF, "rolly");
	}
	catch(const CauseException& e)
	{
		std::cerr << e.getCircumstance() << e.what() << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
