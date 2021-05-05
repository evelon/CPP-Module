#include "whatever.hpp"
#include "Fixed.class.hpp"
#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <time.h>

int	main()
{
	srand(time(NULL));

	{
		std::cout << "char test\n";
		char	a = rand();
		char	b = rand();
		std::cout << "a: " << static_cast<int>(a) << "\nb: " << static_cast<int>(b) << '\n';

		std::cout << "swap...\n";
		swap(a, b);
		std::cout << "a: " << static_cast<int>(a) << "\nb: " << static_cast<int>(b) << '\n';

		std::cout << "min/max...\n";
		std::cout << "min: " << static_cast<int>(min(a, b)) << "\nmax: " << static_cast<int>(max(a, b)) <<'\n';
	}
	{
		std::cout << "\nint test\n";
		int	a = rand();
		int	b = rand();
		std::cout << "a: " << a << "\nb: " << b << '\n';

		std::cout << "swap...\n";
		swap(a, b);
		std::cout << "a: " << a << "\nb: " << b << '\n';

		std::cout << "min/max...\n";
		std::cout << "min: " << min(a, b) << "\nmax: " << max(a, b) <<'\n';
	}
	{
		std::cout << "\nfloat test\n";
		float	a = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
		float	b = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
		std::cout << "a: " << a << "\nb: " << b << '\n';

		std::cout << "swap...\n";
		swap(a, b);
		std::cout << "a: " << a << "\nb: " << b << '\n';

		std::cout << "min/max...\n";
		std::cout << "min: " << min(a, b) << "\nmax: " << max(a, b) <<'\n';
	}
	{
		std::cout << "\nfixed point class test\n";

		Fixed	a;
		Fixed	b;

		a.setRawBits(rand());
		b.setRawBits(rand());

		std::cout << "a: " << a << "\nb: " << b << '\n';

		std::cout << "swap...\n";
		swap(a, b);
		std::cout << "a: " << a << "\nb: " << b << '\n';

		std::cout << "min/max...\n";
		std::cout << "min: " << min(a, b) << "\nmax: " << max(a, b) <<'\n';
	}
	{
		std::cout << "\nmin/max priority test\n";
		int	a = 1;
		int	b = 1;
		std::string	a_address;
		std::string	b_address;
		std::string	output_address;

		std::cout << "a: " << a << "\nb: " << b << '\n';
		std::cout << std::hex << "a_address: " << &a << "\nb_address: " << &b << '\n';

		std::cout << std::hex << "max_address: " << &(max(a, b)) << '\n';
		std::cout << std::hex << "min_address: " << &(min(a, b)) << '\n';
	}
}