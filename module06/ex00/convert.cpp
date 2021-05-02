#include <iostream>
#include <stdlib.h>
#include <ctype.h>

bool	isCStringInt(const char* str)
{
	if (*str == '-' || *str == '+')
		str++;
	while (*str)
	{
		if (!isdigit(*str))
			return (false);
		str++;
	}
	return (true);
}

bool	isCStringFloatDouble(const char* str)
{
	if (!strcmp(str, "nan") ||
		!strcmp(str, "nanf") ||
		!strcmp(str, "inf") ||
		!strcmp(str, "inff") ||
		!strcmp(str, "-inf") ||
		!strcmp(str, "-inff"))
		return (true);
	if (*str == '-' || *str == '+')
		str++;
	int	i = 0;

	while (str[i])
	{
		if (!isdigit(str[i]))
			break;
		i++;
	}
	if (i == 0)
		return (false);
	if (str[i] == '\0')
		return (true);
	if (str[i] == 'f' && str[i + 1] == '\0')
		return (true);
	if (str[i++] != '.')
		return (false);
	while (str[i])
	{
		if (!isdigit(str[i]))
			break;
		i++;
	}
	if (str[i] == '\0')
		return (true);
	if (str[i] == 'f' && str[i + 1] == '\0')
		return (true);
	return (false);
}

void	toChar(const char* input)
{
	std::cout << "char: ";

	if (!isCStringInt(input) && !isCStringFloatDouble(input))
	{
		std::cout << "impossible\n";
		return ;
	}

	int	i;
	try
	{
		i = atoi(input);
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
		return ;
	}

	if (i < -128 || i > 127)
	{
		std::cout << "impossible\n";
		return ;
	}

	char*	c;
	c = reinterpret_cast<char*>(&i);
	if (isprint(*c))
		std::cout << '\'' << c << "'\n";
	else
		std::cout << "Non displayable\n";
}

void	toInt(const char* input)
{
	std::cout << "int: ";

	if (!isCStringInt(input) && !isCStringFloatDouble(input))
	{
		std::cout << "impossible\n";
		return ;
	}

	int	i;
	try
	{
		i = atoi(input);
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
		return ;
	}

	std::cout << i << '\n';
}

void	toFloat(const char* input)
{
	std::cout << "float: ";

	if (!isCStringFloatDouble(input))
	{
		std::cout << "impossible\n";
		return ;
	}

	float	f;

	try
	{
		f = atof(input);
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}

	std::cout << f;

	if (f - static_cast<int>(f) == 0.0)
		std::cout << ".0";
	std::cout << "f\n";
}

void	toDouble(const char* input)
{
	std::cout << "double: ";

	if (!isCStringFloatDouble(input))
	{
		std::cout << "impossible\n";
		return ;
	}

	double	d;

	try
	{
		d = atof(input);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << d;
	if (d - static_cast<int>(d) == 0.0)
		std::cout << ".0";
	std::cout << "\n";
}

int	main(int argc, char* argv[])
{
	if (argc != 2)
		return (1);
	toChar(argv[1]);
	toInt(argv[1]);
	toFloat(argv[1]);
	toDouble(argv[1]);
}
