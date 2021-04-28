#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"

class	TacticalMarine: public ISpaceMarine
{
public:
	TacticalMarine(void);
	TacticalMarine(TacticalMarine const& marine);
	virtual ~TacticalMarine(void);
	TacticalMarine&	operator=(TacticalMarine const& marine);

	virtual ISpaceMarine*	clone() const;
	virtual void			battleCry() const;
	virtual void			rangedAttack() const;
	virtual void			meleeAttack() const;
};

#endif