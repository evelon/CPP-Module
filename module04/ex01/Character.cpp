#include "Character.hpp"

Character::Character(std::string const& name):
	name(name), actionPoints(40), aweapon(NULL) {}

Character::~Character() {}

Character::Character(Character const& character):
	name(character.name),
	actionPoints(character.actionPoints),
	aweapon(character.aweapon)
{}
{}
Character&	Character::operator=(Character const& character);

std::string const&	Character::getName() const;
void	Character::recoverAP();
void	Character::equip(AWeapon* aweapon);
void	Character::attack(Enemy* enemy);