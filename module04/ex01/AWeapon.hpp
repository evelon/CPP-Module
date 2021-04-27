#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <string>

class	AWeapon
{
private:
	std::string	name;
	int			damage;
	int			apCost;

public:
	AWeapon(std::string const& name = "common knife", int apcost = 5, int damage = 10);
	~AWeapon();
	AWeapon(AWeapon const& aweapon);
	AWeapon&		operator=(AWeapon const& aweapon);
	std::string		getName() const;
	int				getAPCost() const;
	int				getDamage() const;
	virtual void	attack() const = 0;
};

#endif
