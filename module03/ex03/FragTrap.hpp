#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <cstdlib>

class	FragTrap: public ClapTrap
{
private:
	static int const	numQuotes = 5;
	static std::string const	quotes[numQuotes];

public:
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(FragTrap const& fragtrap);
	FragTrap&	operator=(FragTrap const& fragtrap);
	void	vaulthunter_dot_exe(std::string const& target);
};

#endif
