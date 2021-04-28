#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class	AWeapon
{
protected:
	std::string	name;
	int			apCost;
	int			damage;

public:
	// Coplien's form
	AWeapon(std::string const& name = "Common Knife", int apcost = 5, int damage = 10);
	virtual ~AWeapon();
	AWeapon(AWeapon const& aweapon);
	AWeapon&		operator=(AWeapon const& aweapon);
	// Getters
	std::string const&	getName(void) const;
	int					getAPCost(void) const;
	int					getDamage(void) const;

	virtual void	attack(void) const = 0;
};

#endif
