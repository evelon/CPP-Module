#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class	AMateria
{
private:
	std::string		type;
	unsigned int	_xp;

protected:
	void	setXP(unsigned int xp);

public:
	AMateria(std::string const& type);
	AMateria(AMateria const& amateria);
	virtual ~AMateria();
	AMateria&	operator=(AMateria const& amateria);

	std::string const&	getType() const;
	unsigned int		getXP() const;

	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);
};

#endif
