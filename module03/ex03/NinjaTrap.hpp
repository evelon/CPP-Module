#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	NinjaTrap: public ClapTrap
{
public:
	NinjaTrap(std::string const& name);
	~NinjaTrap();
	NinjaTrap(NinjaTrap const& ninjatrap);
	NinjaTrap&	operator=(NinjaTrap const& ninjatrap);
	void	ninjaShoeBox(ClapTrap& claptrap);
	void	ninjaShoeBox(FragTrap& fragtrap);
	void	ninjaShoeBox(ScavTrap& scavtrap);
	void	ninjaShoeBox(NinjaTrap& ninjatrap);
};

#endif
