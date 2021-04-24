#ifndef EXPRCALCULATOR_HPP
# define EXPRCALCULATOR_HPP
# include "Fixed.class.hpp"
# include "exprParser.hpp"
# include <string>
# include <sstream>

# define INITIAL_STACK_SIZE 8

template	<class T>
class exprStack
{
private:
	T*	stack;
	int				stackSize;
	int				num;

	void	expandStack(void);

public:
	exprStack(void);
	~exprStack(void);
	void		push(T t);
	T			pop(void);
	void		lookStack(void);
};

typedef	struct t_form
{
	calc_type	type;
	Fixed		num;
}				form;

form	interpretor(std::string str);
void	postfixTranslator(std::stringstream& ss, std::istringstream& iss);
Fixed	postfixCalculator(std::stringstream& ss);

#endif
