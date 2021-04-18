#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; j < (int)strlen(argv[i]); j++)
		{
			if ('a' <= argv[i][j] && argv[i][j] <= 'z')
				std::cout << (char)(argv[i][j] - ('a' - 'A'));
			else
				std::cout << argv[i][j];
		}
	}
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}