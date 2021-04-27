#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class	Victim
{
protected:
	std::string	name;
	virtual void	bornMsg(void);

public:
	Victim(std::string name);
	virtual ~Victim();
	Victim(Victim const& victim);
	Victim&	operator=(Victim const& victim);
	std::string	getName(void) const;
	void	getPolymorphed(void) const;
};

std::ostream&	operator<<(std::ostream& os, Victim const& victim);

#endif
