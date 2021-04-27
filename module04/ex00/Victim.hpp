#ifndef VICTIM_HPP
# define VICTIM_HPP

# include "Person.hpp"

class	Victim: protected Person
{
public:
	Victim(std::string name);
	virtual ~Victim();
	Victim(Victim const& victim);
	Victim&	operator=(Victim const& victim);
	std::string	getName(void) const;
	virtual void	getPolymorphed(void) const;
};

std::ostream&	operator<<(std::ostream& os, Victim const& victim);

#endif
