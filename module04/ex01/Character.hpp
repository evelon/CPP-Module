#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AWeapon.hpp"
# include "Enemy.hpp"

class	Character
{
private:
	std::string	name;
	int			actionPoints;
	AWeapon*	aweapon;
	Character();

public:
	// Coplien's form
	Character(std::string const& name);
	~Character(void);
	Character(Character const& character);
	Character&	operator=(Character const& character);

	std::string const&	getName(void) const;
	int const&			getAP(void) const;
	AWeapon* const&		getWeapon(void) const;
	void				recoverAP(void);
	void				equip(AWeapon* aweapon);
	void				attack(Enemy* enemy);
};

std::ostream&	operator<<(std::ostream& os, Character const& character);

#endif
