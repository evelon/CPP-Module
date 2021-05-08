#include <iostream>
#include "mutantstack.hpp"

int main()
{
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	for (int i = 0; i < 10; i++)
		mstack.push(i);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	it++;
	it--;
	it++;


	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << std::endl;

	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	while (rit != rite)
	{
		std::cout << *rit << '\n';
		*rit *= 2;
		rit++;
	}

	it = mstack.begin();
	ite = mstack.end();
	while (it != ite)
	{
		std::cout << *it << '\n';
		it++;
	}

	std::stack<int> s(mstack);
	while (0 < s.size())
	{
		std::cout << s.top() << std::endl;
		s.pop();
	}
	return 0;
}