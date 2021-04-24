#include "FragTrap.hpp"


FragTrap::FragTrap(std::string name):
	hitPoints(100),
	maxHitPoints(100),
	energyPoints(100),
	maxEnergyPoints(100),
	level(1),
	name(name),
	meleeAttackDamage(30),
	rangedAttackDamage(20),
	armorDamageReduction(5)
{}

std::string const	FragTrap::quotes[] = {"beep....", "과제 노잼....", "노잼인 과제 재밌게 만들기 노잼....", "술 마시고 싶다...", "과제 너무 폭력적이다..."};


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

std::string	FragTrap::getName(void)
{
	return (this->name);
}

void	FragTrap::rangedAttack(std::string const& target)
{
	std::cout << "FR4G-TP <" << this->name << "> attacks <" << target << \
	"> at range, causing <" << this->rangedAttackDamage << "> points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const& target)
{
	std::cout << "FR4G-TP <" << this->name << "> attacks <" << target << \
	"> right behind, causing <" << this->meleeAttackDamage << "> points of damage!" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const& target)
{
	if (this->energyPoints < 25)
	{
		std::cout << "Not enough energy." << std::endl;
		return ;
	}

	void	(FragTrap::* const attacks[2])(std::string const&) = \
	{
		&FragTrap::rangedAttack,
		&FragTrap::meleeAttack
	};
	(this->*attacks[rand() % 2])(target);
	std::cout << "FR4G-TP <" << this->name << "> :" << this->quotes[rand() % 5] << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	Point	damage(Point(amount) - this->armorDamageReduction);
	std::cout << "FR4G-TP <" << this->name << "> gets attacked, taking <" << damage << "> damages." << std::endl;
	if (this->hitPoints == 0)
	{
		std::cout << "<" << name << "> has already been broken." << std::endl;
		return ;
	}
	this->hitPoints -= damage;
	if (this->hitPoints == 0)
		std::cout << "<" << this->name << "> got broken." << std::endl;
	return ;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FR4G-TP <" << this->name << "> gets repaired <" << amount << "> points." << std::endl;
	if (this->hitPoints == 0)
	{
		std::cout << "but it is totally broken, so cannot be repaired." << std::endl;
		return ;
	}
	this->hitPoints += Point(amount);
	if (this->hitPoints == 100)
		std::cout << "<" << this->name << "> is fully repaired." << std::endl;
	return ;
}
