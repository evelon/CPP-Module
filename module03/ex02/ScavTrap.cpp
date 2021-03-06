#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name):
	ClapTrap("SC4V-TP", name, 100, 100, 50, 50, 1, 20, 15, 3)
{
	std::cout << "ScavTrap is constructed" << std::endl;
}

std::string const	ScavTrap::challenges[] = {
	"마라 맵기 5단계를 먹어라....",
	"K-minishell 평가를 받아라....",
	"노잼과제 받아라....",
	"술이 들어간다 쭉쭉 쭉쭊쭉...",
	"총에 한 번 살살 맞아봐라..."
};

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap is destructed" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& scavtrap):
	ClapTrap(scavtrap) {}

ScavTrap&	ScavTrap::operator=(ScavTrap const& scavtrap)
{
	ClapTrap::operator=(scavtrap);
	return (*this);
}

void	ScavTrap::challengeNewcomer(void)
{
	std::cout << this->type << " <" << this->getName() << "> :" << this->challenges[rand() % 5] << std::endl;
}
