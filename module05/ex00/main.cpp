#include "Bureaucrat.hpp"

void	test_bureaucrat(int num, std::string name, int grade)
{
	try
	{
		std::cout << "case " << num << ":\n\tname: \"" << name << "\"\n\tgrade: " << grade << '\n';
		Bureaucrat	brcrt(name, grade);

		std::cout << "getName: " << brcrt.getName() << '\n';
		std::cout << brcrt;
		brcrt.upGrade();
		std::cout << brcrt;
		brcrt.downGrade();
		std::cout << brcrt;
		brcrt.downGrade();
		std::cout << brcrt;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "end case" << num << ".\n\n";
}

int	main()
{
	int			num = 0;

	test_bureaucrat(num++, "jiholee", 25);
	test_bureaucrat(num++, "jiholee", 147);
	test_bureaucrat(num++, "jiholee", 1);
	test_bureaucrat(num++, "jiholee", 150);
	test_bureaucrat(num++, "jiholee", 0);
	test_bureaucrat(num++, "jiholee", -32);
	test_bureaucrat(num++, "jiholee", 175);
	test_bureaucrat(num++, "jiholee", 172145);
}