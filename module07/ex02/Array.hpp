#include <exception>
#include <iostream>

template	<typename T>
class	Array
{
private:
	T*	array_head;
	unsigned int	array_size;

public:
	Array(void);
	Array(unsigned int n);
	Array(Array& array);
	~Array(void);
	Array&	operator=(Array const& array);
	T&		operator[](unsigned int n);
	unsigned int	size(void) const;

	class	OutOfRangeException: public std::exception
	{
		virtual const char* what() const throw();
	};
};

template	<typename T>
Array<T>::Array(void):
	array_head(new T[0]), array_size(0)
{
	std::cout << "default construction\n";
}

template	<typename T>
Array<T>::Array(unsigned int n):
	array_head(new T[n]), array_size(n)
{
	std::cout << "sized construction\n";
}

template	<typename T>
Array<T>::Array(Array<T>& array):
	array_head(new T[array.array_size]), array_size(array.array_size)
{
	for (unsigned int i = 0; i < this->array_size; i++)
		this->array_head[i] = array.array_head[i];
	std::cout << "copy construction\n";
}

template	<typename T>
Array<T>::~Array(void)
{
	delete[] this->array_head;
	std::cout << "destruction\n";
}

template	<typename T>
Array<T>&	Array<T>::operator=(Array const& array)
{
	delete[] this->array_head;
	this->array_size = array.array_size;
	this->array_head = new T[this->array_size];
	for (unsigned int i = 0; i < this->array_size; i++)
		this->array_head[i] = array.array_head[i];
	std::cout << "assignation\n";
	return (*this);
}

template	<typename T>
T&		Array<T>::operator[](unsigned int n)
{
	if (n >= this->array_size)
		throw Array<T>::OutOfRangeException();
	std::cout << "index reference\n";
	return (this->array_head[n]);
}

template	<typename T>
unsigned int	Array<T>::size(void) const
{
	std::cout << "get size\n";
	return (this->array_size);
}

template	<typename T>
const char*	Array<T>::OutOfRangeException::what() const throw()
{
	return ("Out of the range of the array");
}
