#ifndef EXPRCALCULATOR_HPP
# define EXPRCALCULATOR_HPP
# include "Fixed.class.hpp"
# include "exprParser.hpp"
# include <string>
# include <sstream>

# define INITIAL_STACK_SIZE 8

class exprStack
{
private:
	std::string*	stack;
	int				stackSize;
	int				num;

	void	expandStack(void);

public:
	exprStack(void);
	~exprStack(void);
	void		push(std::string str);
	std::string	pop(void);
};

typedef	struct t_form
{
	calc_type	type;
	char		oper_type;
	Fixed		num;
}				form;

form	interpretor(std::string str);

#endif
