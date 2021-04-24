#include "exprCalculator.hpp"

template	<class T>
exprStack<T>::exprStack(void):
	stack(new T[INITIAL_STACK_SIZE]), stackSize(INITIAL_STACK_SIZE), num(0) {}

template	<class T>
exprStack<T>::~exprStack(void)
{
	delete[] stack;
}

template	<class T>
void	exprStack<T>::expandStack(void)
{
	this->stackSize *= 2;
	T*	new_stack = new T[stackSize];

	for (int i = 0; i < num; i++)
		new_stack[i] = this->stack[i];
	delete[] this->stack;
	this->stack = new_stack;
}

template	<class T>
void	exprStack<T>::push(T t)
{
	if (num == stackSize)
		this->expandStack();
	this->stack[num++] = t;
}

template	<class T>
T	exprStack<T>::pop(void)
{
	T	temp;
	if (num == 0)
		return (T());
	temp = this->stack[num - 1];
	this->stack[num-- - 1] = T();
	return (temp);
}

template	<class T>
void	exprStack<T>::lookStack(void)
{
	for (int i = 0; i < this->num; i++)
		std::cout << this->stack[i] << '\n';
	std::cout << std::flush;
}

form	interpretor(std::string str)
{
	form				form;
	std::istringstream	iss(str);
	float				f;

	iss >> f;
	if (!iss.fail())
	{
		form.type = number;
		form.num = Fixed(f);
		return (form);
	}
	if (!str.compare("("))
		form.type = bracket_open;
	else if (!str.compare(")"))
		form.type = bracket_close;
	else if (!str.compare("+"))
		form.type = addition;
	else if (!str.compare("-"))
		form.type = subtraction;
	else if (!str.compare("*"))
		form.type = multiplication;
	else if (!str.compare("/"))
		form.type = division;
	else
		form.type = none;
	return (form);
}

void	postfixTranslator(std::stringstream& ss, std::istringstream& iss)
{
	exprStack<std::string>	stack;
	std::string				element;
	std::string				temp;
	form					form;

	do
	{
		iss >> element;
		form = interpretor(element);
		if (form.type == number) // if element is number
			ss << element << ' ';
		else if (form.type == bracket_open || form.type == multiplication || form.type == division) // if it is "(", "*", or "/",
			stack.push(element); // push to stack.
		else if (form.type == addition || form.type == subtraction) // it it is "+" or "-",
		{
			while (1)
			{
				temp = stack.pop(); // keep on popping from stack
				if (temp == std::string()) // if everything has popped, break.
					break ;
				else if (!temp.compare("(")) // if "(" popped out,
				{
					stack.push(temp); // push it back and break.
					break ;
				}
				ss << temp << ' '; // output the popped element
			}
			stack.push(element);
		}
		else if (form.type == bracket_close) // if it is ")", an opening bracket.
		{
			while (1)
			{
				temp = stack.pop(); // keep on popping from stack
				if (!temp.compare("(")) // till it is a closing bracket.
					break ;
				ss << temp << ' ';
			}
		}
	}
	while (iss.tellg() != -1);

	while (1)
	{
		temp = stack.pop();
		if (temp == std::string())
			break ;
		ss << temp << ' ';
	}
	return ;
}

Fixed	postfixCalculator(std::stringstream& ss)
{
	exprStack<Fixed>	stack;
	std::string			element;
	form				form;
	Fixed				temp;

	do
	{
		ss >> element;
		form = interpretor(element);
		switch(form.type)
		{
			case	(number):
				stack.push(form.num);
				break ;
			case	(addition):
				stack.push(stack.pop() + stack.pop());
				break;
			case	(subtraction):
				temp = stack.pop();
				stack.push(stack.pop() - temp);
				break;
			case	(multiplication):
				stack.push(stack.pop() * stack.pop());
				break;
			case	(division):
				temp = stack.pop();
				stack.push(stack.pop() / temp);
			default:
				;
		}
	}
	while (ss.tellg() != -1);
	return (stack.pop());
}