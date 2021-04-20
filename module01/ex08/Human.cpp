#include "Human.hpp"
#include <iostream>

void	Human::meleeAttack(std::string const & target)
{
	std::cout << "A human is beating " << target << "." << std::endl;
}

void	Human::rangedAttack(std::string const & target)
{
	std::cout << "A human is throwing some stones to " << target << "." << std::endl;
}

void	Human::intimidatingShout(std::string const & target)
{
	std::cout << "A human is shouting furiously to " << target << "." << std::endl;
}

void	Human::action(std::string const & action_name, std::string const & target)
{
	std::cout << "A human is doing " << action_name << " to " << target << "." << std::endl;
}
