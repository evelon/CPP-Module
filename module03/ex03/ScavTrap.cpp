#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const& name):
	ClapTrap("SC4V-TP", name, 100, 100, 50, 50, 1, 20, 15, 3)
{}

std::string const	ScavTrap::challenges[] = {
	"마라 맵기 5단계를 먹어라....",
	"K-minishell 평가를 받아라....",
	"노잼과제 받아라....",
	"술이 들어간다 쭉쭉 쭉쭊쭉...",
	"총에 한 번 살살 맞아봐라..."
};

ScavTrap::~ScavTrap() {}

ScavTrap::ScavTrap(ScavTrap const& scavtrap):
	ClapTrap(scavtrap) {}

ScavTrap&	ScavTrap::operator=(ScavTrap const& scavtrap)
{
	ClapTrap::operator=(scavtrap);
	return (*this);
}

void	ScavTrap::challengeNewcomer(void)
{
	if (this->hitPoints == 0)
	{
		std::cout << this->getTypeNName() << " is broken.\n";
		return ;
	}
	std::cout << this->getTypeNName() << " :" << this->challenges[rand() % 5] << std::endl;
}
