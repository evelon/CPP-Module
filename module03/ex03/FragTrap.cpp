#include "FragTrap.hpp"

std::string const	FragTrap::quotes[] = {
	"beep....",
	"과제 노잼....",
	"노잼인 과제 재밌게 만들기 노잼....",
	"술 마시고 싶다...",
	"과제 너무 폭력적이다..."
};

FragTrap::FragTrap(std::string name):
	ClapTrap("FR4G-TP", name, 100, 100, 100, 100, 1, 30, 20, 5)
{}

FragTrap::~FragTrap() {}

FragTrap::FragTrap(FragTrap const& fragtrap):
	ClapTrap(fragtrap) {}

FragTrap&	FragTrap::operator=(FragTrap const& fragtrap)
{
	ClapTrap::operator=(fragtrap);
	return (*this);
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
	std::cout << this->type << " <" << this->getName() << "> :" << this->quotes[rand() % 5] << std::endl;
}
