#include "Character.hpp"

Character::Character(std::string name):
	name(name), idx(0), inventory(new AMateria*[4])
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(Character const& character):
	name(character.name), idx(character.idx), inventory(new AMateria*[4])
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	if (!this->idx)
		return ;
	for (int i = 0; i < this->idx; i++)
		this->inventory[i] = character.inventory[i]->clone();
}

Character::~Character()
{
	for (int i = 0; i < this->idx; i++)
		delete this->inventory[i];
	free(this->inventory);
}

Character&	Character::operator=(Character const& character)
{
	for (int i = 0; i < this->idx; i++)
	{
		delete this->inventory[i];
		this->inventory[i] = NULL;
	}
	this->name = character.name;
	this->idx = character.idx;
	if (!this->idx)
		return ;
	for (int i = 0; i < this->idx; i++)
		this->inventory[i] = character.inventory[i]->clone();
}

std::string const&	Character::getName() const
{
	return (this->name);
}

void				Character::equip(AMateria* m)
{
	if (this->idx >= 4)
		return ;
	this->inventory[this->idx++] = m;
}

void				Character::unequip(int idx)
{
	if (this->idx <= 0)
		return ;
	this->inventory[--this->idx] = NULL;
}
void				Character::use(int idx, ICharacter& target)
{
	this->inventory[idx]->use(target);
}
