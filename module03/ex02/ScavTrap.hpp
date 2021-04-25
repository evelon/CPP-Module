#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <cstdlib>

class	ScavTrap: public ClapTrap
{
private:
	static int const	numChallenges = 5;
	static std::string const	challenges[numChallenges];

public:
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(ScavTrap const& scavtrap);
	ScavTrap&	operator=(ScavTrap const& scavtrap);
	void	challengeNewcomer(void);
};

#endif
