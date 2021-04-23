#include "exprCalculator.hpp"

exprStack::exprStack(void):
	stack(new std::string[INITIAL_STACK_SIZE]), stackSize(INITIAL_STACK_SIZE), num(0) {}

exprStack::~exprStack(void)
{
	delete[] stack;
}

void	exprStack::expandStack(void)
{
	this->stackSize *= 2;
	std::string*	new_stack = new std::string[stackSize];

	for (int i = 0; i < num; i++)
		new_stack[i] = this->stack[i];
	delete[] this->stack;
	this->stack = new_stack;
}

void		exprStack::push(std::string str)
{
	if (num == stackSize)
		this->expandStack();
	this->stack[num++ - 1] = str;
}

std::string	exprStack::pop(void)
{
	std::string	temp;
	if (num == 0)
		return (std::string());
	temp = this->stack[num - 1];
	this->stack[num - 1] = std::string();
	return (temp);
}

std::stringstream	postfixTranslator(std::istringstream iss)
{
	exprStack			stack;
	std::stringstream	ss;
	std::string			element;
	std::string			temp;
	form				form;

	while (iss.tellg() != -1)
	{
		iss >> element;
		form = interpretor(element);
		if (form.oper_type == number)
			ss << element;
		else if (form.oper_type == bracket_open || form.oper_type == mul || form.oper_type == div)
			stack.push(element);
		else if (form.oper_type == add || form.oper_type == sub)
		{
			while (1)
			{
				temp = stack.pop();
				if (temp == std::string())
					break ;
				else if (!temp.compare("("))
				{
					stack.push(temp);
					break ;
				}
				ss << temp;
			}
		}
		else if (form.oper_type == bracket_close)
		{
			while (1)
			{
				temp = stack.pop();
				if (temp.compare("("))
					break ;
				ss << temp;
			}
		}
		else
			break ;
	}

}