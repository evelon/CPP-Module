#include <iostream>

template	<typename T>
void	iter(T* address, unsigned int len, void (*f)(T&))
{
	for (unsigned int i = 0; i < len; i++)
		f(address[i]);
}

template	<typename T>
void	print(T& t)
{
	std::cout << t << '\n';
}

template	<typename T>
void	double_it(T& t)
{
	t += t;
}
