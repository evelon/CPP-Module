#ifndef PEON_HPP
# define PEON

# include "Victim.hpp"

class	Peon: public Victim
{
private:
	void	bornMsg(void);

public:
	Peon(std::string name);
	~Peon();
	Peon(Peon const& peon);
	Peon&	operator=(Peon const& peon);
};

#endif
