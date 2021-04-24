#include "FragTrap.hpp"

Point::Point():
	num(0) {}

Point::Point(unsigned int un):
	num(un)
{
	if (num >= 100)
		this->num = 100;
}

Point::~Point() {}

Point::Point(Point const& point)
{
	this->num = point.num;
}

Point&	Point::operator=(Point const& point)
{
	this->num = point.num;
	return (*this);
}

Point	Point::operator+(Point const& point)
{
	this->num += point.num;
	if (this->num >= 100)
		this->num = 100;
	return (*this);
}

Point	Point::operator-(Point const& point)
{
	if (point.num > this->num)
	{
		this->num = 0;
		return (*this);
	}
	this->num -= point.num;
	return (*this);
}

FragTrap::FragTrap(std::string name):
	hitPoints(100), energyPoints(100), level(1), name(name) {}

FragTrap::~FragTrap() {}

FragTrap::FragTrap(FragTrap const& fragtrap)
{
	*this = fragtrap;
}

FragTrap&	FragTrap::operator=(FragTrap const& fragtrap)
{
	this->hitPoints = fragtrap.hitPoints;
	this->energyPoints = fragtrap.energyPoints;
	this->level = fragtrap.level;
	this->name = fragtrap.name;
	return (*this);
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP <" << this->name << "> attacks <" << target << \
	"> at range, causing <" << this->rangedAttackDamage << "> points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP <" << this->name << "> attacks <" << target << \
	"> right behind, causing <" << this->meleeAttackDamage << "> points of damage!" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{

}

void	FragTrap::takeDamage(unsigned int amount);
void	FragTrap::beRepaired(unsigned int amount);