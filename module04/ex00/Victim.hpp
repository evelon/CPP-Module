#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class	Victim
{
private:
	std::string	name;

public:
	Victim(std::string name);
	~Victim();
	Victim(Victim const& victim);
	Victim&	operator=(Victim const& victim);
	std::string	getName(void) const;
	void	getPolymorphed(void) const;
};

std::ostream&	operator<<(std::ostream& os, Victim const& victim);

#endif
