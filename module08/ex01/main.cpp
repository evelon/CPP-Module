#include "span.hpp"
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>

void	add_num(span& sp, int num)
{
	std::cout << "add number " << num << " to span\n";
	sp.addNumber(num);
}

int	main()
{
	int	n = 0;
	int	len;
	srand(time(nullptr));
	try
	{
		std::cout << "case " << ++n << "\n";
		len = 0;
		std::cout << "initiate span with parameter " << len << "\n";
		span	sp(len);
		add_num(sp, 3);
		std::cout << "case " << n << ": no error\n";
	}
	catch(std::exception& e)
	{
		std::cerr << "error: " << e.what() << '\n';
	}
	std::cout << '\n';

	try
	{
		std::cout << "case " << ++n << "\n";
		len = 3;
		std::cout << "initiate span with parameter " << len << "\n";
		span	sp(len);
		add_num(sp, 3);
		add_num(sp, 3);
		add_num(sp, 3);
		add_num(sp, 3);
		std::cout << "case " << n << ": no error\n";
	}
	catch(std::exception& e)
	{
		std::cerr << "error: " << e.what() << '\n';
	}
	std::cout << '\n';

	try
	{
		std::cout << "case " << ++n << "\n";
		len = 3;
		std::cout << "initiate span with parameter " << len << "\n";
		span	sp(len);

		std::cout << "make a vector with 10 elements\n";
		std::vector<int>	vec;
		for (int i = 0; i < 10; i++)
			vec.push_back(rand() % 40);
		std::cout << "add number using vector iterators to span\n";
		sp.addNumber(vec.begin(), vec.end());
		std::cout << "case " << n << ": no error\n";
	}
	catch(std::exception& e)
	{
		std::cerr << "error: " << e.what() << '\n';
	}
	std::cout << '\n';

	try
	{
		std::cout << "case " << ++n << "\n";
		len = 1;
		std::cout << "initiate span with parameter " << len << "\n";
		span	sp(len);
		std::cout << "add a number\n";
		sp.addNumber(rand());
		std::cout << "get longest span\n";
		std::cout << sp.longestSpan() << '\n';
		std::cout << "case " << n << ": no error\n";
	}
	catch(std::exception& e)
	{
		std::cerr << "error: " << e.what() << '\n';
	}
	std::cout << '\n';

	try
	{
		std::cout << "case " << ++n << "\n";
		len = 3;
		std::cout << "initiate span with parameter " << len << "\n";
		span	sp(len);
		std::cout << "add 3 elements\n";
		for (int i = 0; i < 3; i++)
		{
			std::cout << 3 << '\n';
			sp.addNumber(3);
		}
		std::cout << "get shortest span\n";
		std::cout << sp.shortestSpan() << '\n';
		std::cout << "case " << n << ": no error\n";
	}
	catch(std::exception& e)
	{
		std::cerr << "error: " << e.what() << '\n';
	}
	std::cout << '\n';

	for (int i = 0; i < 10; i++)
	{
		try
		{
			std::cout << "case " << ++n << "\n";
			len = rand() % 10;
			std::cout << "initiate span with parameter " << len << "\n";
			span	sp(len);
			std::cout << "add " << len << " elements\n";
			for (int i = 0; i < len; i++)
			{
				int	temp = rand() % 30;
				std::cout << temp << '\n';
				sp.addNumber(temp);
			}

			std::cout << "get longest span\n";
			std::cout << sp.longestSpan() << '\n';
			std::cout << "get shortest span\n";
			std::cout << sp.shortestSpan() << '\n';
			std::cout << "case " << n << ": no error\n";
		}
		catch(std::exception& e)
		{
			std::cerr << "error: " << e.what() << '\n';
		}
		std::cout << '\n';
	}
}