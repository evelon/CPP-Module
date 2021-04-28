#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <AWeapon.hpp>
# include <Enemy.hpp>

class	Character
{
private:
	std::string	name;
	int			actionPoints;
	AWeapon*	aweapon;

public:
	// Coplien's form
	Character(std::string const& name = "Character");
	~Character();
	Character(Character const& character);
	Character&	operator=(Character const& character);

	std::string const&	getName() const;
	void				recoverAP();
	void				equip(AWeapon* aweapon);
	void				attack(Enemy* enemy);
};

#endif
