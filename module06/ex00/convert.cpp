#include <iostream>
#include <sstream>
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

bool	isCStringFloat(const char* str)
{
	if (!strcmp(str, "nanf") ||
		!strcmp(str, "inff") ||
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
	if (str[i] == 'f' && str[i + 1] == '\0')
		return (true);
	if (str[i++] != '.')
		return (false);
	int temp = i;
	while (str[i])
	{
		if (!isdigit(str[i]))
			break;
		i++;
	}
	if (temp == i)
		return (false);
	if (str[i] == 'f' && str[i + 1] == '\0')
		return (true);
	return (false);
}

bool	isCStringDouble(const char* str)
{
	if (!strcmp(str, "nan") ||
		!strcmp(str, "inf") ||
		!strcmp(str, "-inf"))
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
	if (str[i++] != '.')
		return (false);
	int temp = i;
	while (str[i])
	{
		if (!isdigit(str[i]))
			break;
		i++;
	}
	if (temp == i)
		return (false);
	if (str[i] == '\0')
		return (true);
	return (false);
}

void	toChar(const char* input)
{
	char	c = input[1];

	std::cout << "char: '";
	if (isprint(c))
		std::cout << c << '\'';
	else
		std::cout << "Non displayable";
	std::cout << "\nint: " << static_cast<int>(c) \
	<< "\nfloat: " << static_cast<float>(c) << ".0f"\
	<< "\ndouble: " << static_cast<double>(c) << ".0\n";
}

void	toInt(const char* input)
{
	double d = atof(input);
	if (d < -2147483648 || d > 2147483647)
	{
		std::cout << "impossible\n";
		return ;
	}

	int	i = atoi(input);

	if (i >= -128 && i <= 127)
	{
		std::cout << "char: ";
		if (isprint(static_cast<char>(i)))
			std::cout << '\'' << static_cast<char>(i) << '\'';
		else
			std::cout << "Non displayable";
		std::cout << '\n';
	}
	else
		std::cout << "impossible" << '\n';
	std::cout << "int: " << i << '\n';
	std::cout << "float: " << static_cast<float>(i) << ".0f\n";
	std::cout << "double: " << static_cast<double>(i) << ".0\n";
}

// void	toFloat(const char* input)
// {
// 	std::cout << "float: ";

// 	if (!isCStringFloatDouble(input))
// 	{
// 		std::cout << "impossible\n";
// 		return ;
// 	}

// 	float	f;
// 	f = static_cast<float>(atof(input));

// 	std::cout << f;
// 	std::stringstream	ss;
// 	ss << f;

// 	std::string	str;
// 	ss >> str;

// 	if (str.find_first_of(".e") == std::string::npos)
// 		std::cout << ".0";
// 	std::cout << "f\n";
// }

// void	toDouble(const char* input)
// {
// 	std::cout << "double: ";

// 	if (!isCStringFloatDouble(input))
// 	{
// 		std::cout << "impossible\n";
// 		return ;
// 	}

// 	double	d;
// 	d = atof(input);

// 	std::cout << d;
// 	std::stringstream	ss;
// 	ss << d;

// 	std::string	str;
// 	ss >> str;

// 	if (str.find_first_of(".e") == std::string::npos)
// 		std::cout << ".0";
// 	std::cout << "\n";
// }

void	impossible(void)
{
	std::cout << "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible\n";
}

int	main(int argc, char* argv[])
{
	if (argc != 2)
		return (1);
	if (argv[1][0] == '\'' && argv[1][2] == '\'' && argv[1][3] == '\0')
		toChar(argv[1]);
	else if (isCStringInt(argv[1]))
		toInt(argv[1]);
	// else if (isCStringFloat(argv[1]))
	// 	toFloat(argv[1]);
	// else if (isCStringDouble(argv[1]))
	// 	toDouble(argv[1]);
	else
		impossible();
}
