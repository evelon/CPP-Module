#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include <iostream>

class	Point
{
private:
	unsigned int	num;

public:
	Point();
	Point(unsigned int un);
	~Point();
	Point(Point const& point);
	Point&	operator=(Point const& point);
	Point	operator+(Point const& point);
	Point	operator-(Point const& point);
}

class	FragTrap
{
private:
	point		hitPoints;
	const point	maxHitPoints = 100;
	point		energyPoints;
	const point	maxEnergyPoints = 100;
	point		level;
	std::string	name;
	const point	meleeAttackDamage = 30;
	const point	rangedAttackDamage = 20;
	const point	amorDamageReduction = 5;

public:
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(FragTrap const& fragtrap);
	FragTrap&	operator=(FragTrap const& fragtrap);
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	vaulthunter_dot_exe(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif
