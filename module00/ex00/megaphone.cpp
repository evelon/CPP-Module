#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; j < (int)strlen(argv[i]); j++)
		{
			if ('a' <= argv[i][j] && argv[i][j] <= 'z')
				cout << (char)(argv[i][j] - ('a' - 'A'));
			else
				cout << argv[i][j];
		}
	}
	if (argc == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	cout << endl;
	return (0);
}