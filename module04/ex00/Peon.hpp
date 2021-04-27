#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class	Peon: public Victim
{
private:
	void	bornMsg(void);

public:
	Peon(std::string name = "peon");
	~Peon();
	Peon(Peon const& peon);
	Peon&	operator=(Peon const& peon);
	virtual void 	getPolymorphed(void) const override;
};

#endif
