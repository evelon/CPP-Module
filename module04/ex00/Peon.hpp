#ifndef PEON_HPP
# define PEON

# include "Victim.hpp"

class	Peon: public Victim
{
private:
	/* data */
public:
	Peon(std::string name);
	~Peon();
};

Peon::Peon(/* args */)
{
}

Peon::~Peon()
{
}


#endif
