#include "Human.hpp"

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
	void	(Human::* actions[3])(std::string const &) =
	{
		&Human::meleeAttack,
		&Human::rangedAttack,
		&Human::intimidatingShout
	};
	std::string	names[3] =
	{
		"meleeAttack",
		"rangedAttack",
		"intimidatingShout"
	};

	for (int i = 0; i < 3; i++)
	{
		if (!action_name.compare(names[i]))
		{
			(this->*actions[i])(target);
			return ;
		}
	}
	return ;
}
