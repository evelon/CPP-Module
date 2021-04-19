#include <iostream>
#include <string>

int	main()
{
	std::string		greeting("HI THIS IS BRAIN");
	std::string*	ptr;
	std::string&	ref = greeting;

	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;
	return (0);
}
