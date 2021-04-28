#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class	Character: public ICharacter
{
private:
	std::string			name;
	static const int	size = 4;
	AMateria*			inventory[Character::size];

public:
	Character(std::string name = "Character");
	Character(Character const& character);
	virtual ~Character();
	Character&	operator=(Character const& character);

	virtual std::string const&	getName() const;
	virtual void				equip(AMateria* m);
	virtual void				unequip(int idx);
	virtual void				use(int idx, ICharacter& target);
};

#endif
