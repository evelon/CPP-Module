#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	NinjaTrap: public ClapTrap
{
public:
	NinjaTrap(std::string name);
	~NinjaTrap();
	NinjaTrap(NinjaTrap const& ninjatrap);
	NinjaTrap&	operator=(NinjaTrap const& ninjatrap);
	void	ninjaShoeBox(ClapTrap const& claptrap);
	void	ninjaShoeBox(FragTrap const& fragtrap);
	void	ninjaShoeBox(ScavTrap const& scavtrap);
	void	ninjaShoeBox(NinjaTrap const& ninjatrap);
};

#endif
