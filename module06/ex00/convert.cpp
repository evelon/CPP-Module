#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <ctype.h>

void	toDouble(const char*);
void	impossible(void);

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
	if (!strcmp(str, "nanf"))
		return (true);
	if (*str == '-' || *str == '+')
		str++;
	if (!strcmp(str, "inff"))
		return (true);
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
	if (!strcmp(str, "nan"))
		return (true);
	if (*str == '-' || *str == '+')
		str++;
	if (!strcmp(str, "inf"))
		return (true);
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

void	printChar(char c)
{
	std::cout << "char: ";
	if (isprint(static_cast<char>(c)))
		std::cout << '\'' << static_cast<char>(c) << '\'';
	else
		std::cout << "Non displayable";
	std::cout << '\n';
}

void	printFloat(float f)
{
	std::cout <<"float: " << f;

	std::stringstream	ss;
	std::string			str;

	ss << f;
	ss >> str;
	if (str.find_first_of("e.") == std::string::npos \
		&& str.find("inf") == std::string::npos \
		&& str.find("nan") == std::string::npos)
		std::cout << ".0";
	std::cout << "f\n";
}

void	printDouble(double d)
{
	std::cout << "double " << d;

	std::stringstream	ss;
	std::string			str;

	ss << d;
	ss >> str;
	if (str.find_first_of("e.") == std::string::npos \
		&& str.find("inf") == std::string::npos \
		&& str.find("nan") == std::string::npos)
		std::cout << ".0";
	std::cout << "\n";
}

void	toInt(const char* input)
{
	double d = atof(input);
	if (d < -2147483648 || d > 2147483647)
	{
		if (isCStringDouble(input))
		{
			toDouble(input);
			return;
		}
		impossible();
		return ;
	}

	int	i = atoi(input);

	if (i >= -128 && i <= 127)
		printChar(static_cast<char>(i));
	else
		std::cout << "char: impossible\n";
	std::cout << "int: " << i << '\n';
	printFloat(static_cast<float>(i));
	printDouble(static_cast<double>(i));
}

void	toFloat(const char* input)
{
	float	f;
	f = static_cast<float>(atof(input));

	if (f >= -128 && f <= 127)
		printChar(static_cast<char>(f));
	else
		std::cout << "char: impossible\n";
	if (f >= -2147483648 && f <= 2147483647)
		std::cout << "int: " << static_cast<int>(f) << '\n';
	else
		std::cout << "int: impossible\n";
	printFloat(f);
	printDouble(static_cast<double>(f));
}

void	toDouble(const char* input)
{
	float	d;
	d = (atof(input));

	if (d >= -128 && d <= 127)
		printChar(static_cast<char>(d));
	else
		std::cout << "char: impossible\n";
	if (d >= -2147483648 && d <= 2147483647)
		std::cout << "int: " << static_cast<int>(d) << '\n';
	else
		std::cout << "int: impossible\n";
	printFloat(static_cast<float>(d));
	printDouble(d);
}

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
	else if (isCStringFloat(argv[1]))
		toFloat(argv[1]);
	else if (isCStringDouble(argv[1]))
		toDouble(argv[1]);
	else
		impossible();
	return (0);
}
