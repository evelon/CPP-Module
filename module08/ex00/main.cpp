#include "easyfind.hpp"
#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>

int	main()
{
	{
		std::vector<int>	vec;
		std::vector<int>::iterator	vi;
		vi = easyfind(vec, 2);
		if (vi != vec.end())
			std::cout << *vi << '\n';
		else
			std::cout << "no such element\n";
	}
	{
		std::array<int, 3>	arr = {1, 2, 3};
		std::array<int, 3>::iterator	ai;
		ai = easyfind(arr, 4);
		if (ai != arr.end())
			std::cout << *ai << '\n';
		else
			std::cout << "no such element\n";
	}
	{
		std::array<int, 10>	arr = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		std::array<int, 10>::iterator	ai;
		ai = easyfind(arr, 3);
		if (ai != arr.end())
			*ai = 7;
		for (ai = arr.begin(); ai != arr.end(); ai++)
			std::cout << *ai << '\n';
		std::cout << '\n';
	}
	{
		std::vector<int>	vec(0);
		for (int i = 0; i < 10; i++)
			vec.push_back(i);
		std::vector<int>::iterator	vi;
		vi = easyfind(vec, 7);
		if (vi != vec.end())
			*vi = 8;
		for (vi = vec.begin(); vi != vec.end(); vi++)
			std::cout << *vi << '\n';
		std::cout << '\n';
	}
	{
		std::deque<int>	dq;
		for (int i = 0; i < 10; i++)
			dq.push_back(i);
		std::deque<int>::iterator	di;
		di = easyfind(dq, 4);
		if (di != dq.end())
			*di = 123;
		for (di = dq.begin(); di != dq.end(); di++)
			std::cout << *di << '\n';
		std::cout << '\n';
	}
	{
		std::list<int>	lst;
		for (int i = 0; i < 10; i++)
			lst.push_back(i);
		std::list<int>::iterator	li;
		li = easyfind(lst, 2);
		if (li != lst.end())
			*li = -12;
		for (li = lst.begin(); li != lst.end(); li++)
			std::cout << *li << '\n';
		std::cout << '\n';
	}
	{

	}
	return (0);
}