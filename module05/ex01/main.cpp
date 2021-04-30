#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat	davit("dabit", 27);
	Bureaucrat	crane("crane", 13);
	Form		file("file", 17, 25);

	std::cout << davit << crane << file << '\n';

	davit.signForm(file);
	std::cout << file << '\n';
	crane.signForm(file);
	std::cout << file << '\n';

	try
	{
		Form	file2("file2", 0, 25);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Form	file3("file3", 2, 176);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Form	file4("file4", 175, 25);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Form	file5("file5", 17, -4);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}