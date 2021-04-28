#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const& type):
	hitPoints(hp), type(type) {}

Enemy::~Enemy() {}

Enemy::Enemy(Enemy const& enemy):
	hitPoints(enemy.hitPoints), type(enemy.type) {}

Enemy&	Enemy::operator=(Enemy const& enemy)
{
	this->hitPoints = enemy.hitPoints;
	this->type = enemy.type;
	return (*this);
}

std::string		Enemy::getType(void) const
{
	return (this->type);
}

int				Enemy::getHP(void) const
{
	return (this->hitPoints);
}

// void	Enemy::takeDamage(int damage)
// {
// 	if (this->hitPoints <= 0)
// 		return ;
// 	hitPoints -= damage;
// }
