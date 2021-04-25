#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include "Point.hpp"

class ClapTrap
{
private:
	std::string	name;

protected:
	std::string type;
	Point	hitPoints;
	Point	maxHitPoints;
	Point	energyPoints;
	Point	maxEnergyPoints;
	Point	level;
	Point	meleeAttackDamage;
	Point	rangedAttackDamage;
	Point	armorDamageReduction;

public:
	ClapTrap(
		std::string type,
		std::string name,
		Point hit_points,
		Point max_hit_points,
		Point energy_points,
		Point max_energy_points,
		Point level,
		Point melee_attack_damage,
		Point ranged_attack_damage,
		Point armor_damage_reduction);
	~ClapTrap();
	ClapTrap(ClapTrap const& claptrap);
	ClapTrap&	operator=(ClapTrap const& claptrap);
	std::string	getName(void);
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif
