#include <string>
#include <sstream>
#include <iostream>

int main()
{
	std::istringstream	iss(std::string(" "));
	float				f_detector;

	iss >> f_detector;
	iss >> f_detector;
	std::cout << iss.rdstate() << std::endl;
}