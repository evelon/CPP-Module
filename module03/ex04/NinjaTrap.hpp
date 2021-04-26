#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
// # include "SuperTrap.hpp"

class	NinjaTrap: virtual public ClapTrap
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
	// void	ninjaShoeBox(SuperTrap& supertrap);
};

#endif
