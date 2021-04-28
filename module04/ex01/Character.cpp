#include "Character.hpp"

Character::Character(std::string const& name):
	name(name), actionPoints(40), aweapon(NULL) {}

Character::~Character() {}

Character::Character(Character const& character):
	name(character.name),
	actionPoints(character.actionPoints),
	aweapon(character.aweapon)
{}

Character&	Character::operator=(Character const& character)
{
	this->name = character.name;
	this->actionPoints = character.actionPoints;
	this->aweapon = character.aweapon;
	return (*this);
}

std::string const&	Character::getName() const
{
	return (this->name);
}

int const&	Character::getAP() const
{
	return (this->actionPoints);
}

void	Character::recoverAP()
{
	this->actionPoints += 10;
	if (this->actionPoints > 40)
		this->actionPoints = 40;
}

AWeapon* const&		Character::getWeapon(void) const
{
	return (this->aweapon);
}

void	Character::equip(AWeapon* aweapon)
{
	this->aweapon = aweapon;
}
void	Character::attack(Enemy* enemy)
{
	if (!this->aweapon)
		return ;
	if (this->actionPoints < this->aweapon->getAPCost() || enemy->getHP() <= 0)
		return ;
	std::cout << this->name << " attacks " << enemy->getType() << " with a " << this->aweapon->getName() << '\n';
	this->actionPoints -= this->aweapon->getAPCost();
	this->aweapon->attack();
	enemy->takeDamage(this->aweapon->getDamage());

}

std::ostream&	operator<<(std::ostream& os, Character const& character)
{
	os << character.getName() << " has " << character.getAP() << " AP and ";
	if (!character.getWeapon())
		return (os << "is unarmed\n");
	return (os << "wields a " << character.getWeapon()->getName() << '\n');
}