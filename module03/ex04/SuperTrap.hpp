#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class	SuperTrap: public FragTrap, public NinjaTrap
{
public:
	SuperTrap(std::string const& name);
	~SuperTrap();
	SuperTrap(SuperTrap const& supertrap);
	SuperTrap&	operator=(SuperTrap const& supertrap);
};

#endif
