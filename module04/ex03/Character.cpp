#include "Character.hpp"

Character::Character(std::string name):
	name(name)
{
	for (int i = 0; i < this->size; i++)
		this->inventory[i] = NULL;
}

Character::Character(Character const& character):
	name(character.name)
{
	for (int i = 0; i < this->size; i++)
		this->inventory[i] = NULL;
	for (int i = 0; i < this->size; i++)
		this->inventory[i] = character.inventory[i]->clone();
}

Character::~Character()
{
	for (int i = 0; i < this->size; i++)
		if (this->inventory[i])
			delete this->inventory[i];
}

Character&	Character::operator=(Character const& character)
{
	for (int i = 0; i < this->size; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
		this->inventory[i] = NULL;
	}
	this->name = character.name;
	for (int i = 0; i < this->size; i++)
		this->inventory[i] = character.inventory[i]->clone();
	return (*this);
}

std::string const&	Character::getName() const
{
	return (this->name);
}

void				Character::equip(AMateria* m)
{
	for (int i = 0; i < size; i++)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = m;
			return ;
		}
	}
}

void				Character::unequip(int idx)
{
	if (idx < 0 || idx >= size)
		return ;
	this->inventory[idx] = NULL;
}

void				Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= size)
		return ;
	if (this->inventory[idx])
		this->inventory[idx]->use(target);
}
