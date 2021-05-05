#include <stdlib.h>
#include <time.h>
#include "Array.hpp"

int	main()
{
	srand(time(nullptr));
	try
	{
		std::cout << "empty int Array initialization\n";
		Array<int>	arr;
		std::cout << "array size: " << arr.size() << '\n';
		std::cout << arr[0];
		std::cout << "Error of no error\n";
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	try
	{
		std::cout << "int[10] Array initialization\n";
		Array<int>	arr(10);
		std::cout << "array size: " << arr.size() << '\n';
		for (int i = 0; i < 11; i++)
			std::cout << "index " << i << ": " << arr[i] << '\n';
		std::cout << "Error of no error\n";
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	try
	{
		std::cout << "char[26] Array initialization\n";
		Array<char>	arr(26);
		std::cout << "array size: " << arr.size() << '\n';
		for (int i = 0; i < 27; i++)
		{
			arr[i] = 'a' + i;
			std::cout << "index " << i << ": " << arr[i] << '\n';
		}
		std::cout << "Error of no error\n";
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	try
	{
		std::cout << "std::string[10] Array initialization\n";
		Array<std::string>	arr(10);
		std::cout << "array size: " << arr.size() << '\n';
		for (int i = 0; i < 11; i++)
		{
			arr[i] = "hello";
			std::cout << "index " << i << ": " << arr[i] << '\n';
		}
		std::cout << "Error of no error\n";
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	try
	{
		std::cout << "assignation/copy construction test\n";
		Array<int>	arr1(10);
		std::cout << "array size: " << arr1.size() << '\n';
		for (int i = 0; i < 10; i++)
		{
			arr1[i] = rand() % 10;
			std::cout << "arr1 index " << i << ": " << arr1[i] << '\n';
		}
		Array<int>	arr2(arr1);
		for (int i = 0; i < 10; i++)
			std::cout << "arr2 index " << i << ": " << arr2[i] << '\n';
		std::cout << "doubling arr1\n";
		for (int i = 0; i < 10; i++)
		{
			arr1[i] *= 2;
			std::cout << "arr1 index " << i << ": " << arr1[i] << '\n';
		}
		for (int i = 0; i < 10; i++)
			std::cout << "arr2 index " << i << ": " << arr2[i] << '\n';
		arr2 = arr1;
		for (int i = 0; i < 10; i++)
			std::cout << "arr2 index " << i << ": " << arr2[i] << '\n';
		std::cout << "Error of no error\n";
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
}
