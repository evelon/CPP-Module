#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class	Ice: public AMateria
{
public:
	Ice(void);
	Ice(Ice const& ice);
	virtual ~Ice(void);
	Ice&	operator=(Ice const& ice);

	virtual AMateria*	clone() const;
	virtual void		use(ICharacter& target);
};

#endif
