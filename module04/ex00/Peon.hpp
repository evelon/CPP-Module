#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class	Peon: public Victim
{
	void	bornMsg(void);

protected:
	Peon();

public:
	Peon(std::string name);
	virtual ~Peon();
	Peon(Peon const& peon);
	Peon&	operator=(Peon const& peon);
	virtual void 	getPolymorphed(void) const;
};

#endif
