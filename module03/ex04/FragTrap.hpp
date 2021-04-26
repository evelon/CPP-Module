#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <cstdlib>

class	FragTrap: virtual public ClapTrap
{
private:
	static int const	numQuotes = 5;
	static std::string const	quotes[numQuotes];

public:
	FragTrap(std::string const& name);
	~FragTrap();
	FragTrap(FragTrap const& fragtrap);
	FragTrap&	operator=(FragTrap const& fragtrap);
	void	rangedAttack(std::string const& target);
	void	meleeAttack(std::string const& target);
	void	vaulthunter_dot_exe(std::string const& target);
};

#endif
