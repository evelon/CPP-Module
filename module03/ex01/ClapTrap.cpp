#include "ClapTrap.hpp"

ClapTrap::ClapTrap(
	std::string type,
	std::string name,
	Point hit_points,
	Point max_hit_points,
	Point energy_points,
	Point max_energy_points,
	Point level,
	Point melee_attack_damage,
	Point ranged_attack_damage,
	Point armor_damage_reduction):
	name(name),
	type(type),
	hitPoints(hit_points),
	maxHitPoints(max_hit_points),
	energyPoints(energy_points),
	maxEnergyPoints(max_energy_points),
	level(level),
	meleeAttackDamage(melee_attack_damage),
	rangedAttackDamage(ranged_attack_damage),
	armorDamageReduction(armor_damage_reduction)
{}

ClapTrap::~ClapTrap() {}

ClapTrap::ClapTrap(ClapTrap const& claptrap)
{
	*this = claptrap;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const& claptrap)
{
	this->name = claptrap.name;
	this->hitPoints = claptrap.hitPoints;
	this->maxHitPoints = claptrap.maxHitPoints;
	this->energyPoints = claptrap.energyPoints;
	this->maxEnergyPoints = claptrap.maxEnergyPoints;
	this->level = claptrap.level;
	this->meleeAttackDamage = claptrap.meleeAttackDamage;
	this->rangedAttackDamage = claptrap.rangedAttackDamage;
	this->armorDamageReduction = claptrap.armorDamageReduction;
	return (*this);
}

std::string	ClapTrap::getName(void)
{
	return (this->name);
}

void	ClapTrap::rangedAttack(std::string const& target)
{
	if (this->hitPoints == 0)
	{
		std::cout << this->type << " <" << name << "> is broken." << std::endl;
		return ;
	}
	std::cout << this->type << " <" << this->name << "> attacks <" << target << \
	"> at range, causing <" << this->rangedAttackDamage << "> points of damage!" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const& target)
{
	if (this->hitPoints == 0)
	{
		std::cout << this->type << " <" << name << "> is broken." << std::endl;
		return ;
	}
	std::cout << this->type << " <" << this->name << "> attacks <" << target << \
	"> right behind, causing <" << this->meleeAttackDamage << "> points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints == 0)
	{
		std::cout << this->type << " <" << name << "> has already been broken." << std::endl;
		return ;
	}
	Point	damage(Point(amount) - this->armorDamageReduction);
	std::cout << this->type << " <" << this->name << "> gets attacked, taking <" << damage << "> damages." << std::endl;
	this->hitPoints -= damage;
	if (this->hitPoints == 0)
		std::cout << this->type << " <" << this->name << "> got broken." << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->type << " <" << this->name << "> gets repaired <" << amount << "> points." << std::endl;
	if (this->hitPoints == 0)
	{
		std::cout << "but it is totally broken, so cannot be repaired." << std::endl;
		return ;
	}
	this->hitPoints += Point(amount);
	if (this->hitPoints >= this->maxHitPoints)
	{
		this->hitPoints = this->maxHitPoints;
		std::cout << this->type << " <" << this->name << "> is fully repaired." << std::endl;
	}
	return ;
}
