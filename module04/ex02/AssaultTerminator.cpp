#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *\n";
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const& terminator)
{
	*this = terminator;
	std::cout << "* teleports from space *\n";
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I'll be back...\n";
}

AssaultTerminator&	AssaultTerminator::operator=(AssaultTerminator const& terminator)
{
	(void)terminator;
	return (*this);
}

ISpaceMarine*	AssaultTerminator::clone() const
{
	return (new AssaultTerminator(*this));
}

void			AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!\n";
}

void			AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *\n";
}

void			AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *\n";
}
