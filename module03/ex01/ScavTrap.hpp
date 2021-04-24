#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "FragTrap.cpp"

class	ScavTrap : public FragTrap
{
private:
	Point	hitPoints;
	Point	maxHitPoints;
	Point	energyPoints;
	Point	maxEnergyPoints;
	Point	level;
	std::string	name;
	Point	meleeAttackDamage;
	Point	rangedAttackDamage;
	Point	armorDamageReduction;
	static int const	numQuotes = 5;
	static std::string const	quotes[numQuotes];

public:
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(FragTrap const& fragtrap);
	FragTrap&	operator=(FragTrap const& fragtrap);
	std::string	getName(void);
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	vaulthunter_dot_exe(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif
