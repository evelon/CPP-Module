#include "span.hpp"


const char*	span::ExceedSpanSizeException::what(void) const throw()
{
	return ("cannot put element(s) into the span");
}

const char* span::NoSpanException::what(void) const throw()
{
	return ("no span exists");
}

span::span(unsigned int len):
	numbers(), len(len)
{}

span::span(span const& span):
	numbers(span.numbers), len(span.len) {}

template<typename Iterator>
span::span(Iterator const& begin, Iterator const& last):
	numbers(), len(0)
{
	this->len = last - begin;
	for (Iterator start = begin; start != last; start++)
		this->numbers.insert(*start);
}

span::~span() {}

span&	span::operator=(span const& span)
{
	this->numbers.clear();
	this->numbers = span.numbers;
	this->len = span.len;
	return (*this);
}

void			span::addNumber(int n)
{
	if (this->numbers.size() == this->len)
		throw(span::ExceedSpanSizeException());
	this->numbers.insert(n);
}

template<typename Iterator>
void			span::addNumber(Iterator const& begin, Iterator const& last)
{
	if (last - begin + this->numbers.size() >= this->len)
		throw (span::ExceedSpanSizeException());
	for (Iterator start = begin; start != last; start++)
		this->numbers.insert(*start);
}

unsigned int	span::shortestSpan(void)
{
	if (this->numbers.size() <= 1)
		throw (span::NoSpanException());
	unsigned int	min = UINT32_MAX;
	for (std::multiset<int>::iterator msi = ++this->numbers.begin();
		msi != this->numbers.end();
		msi++)
	{
		std::multiset<int>::iterator temp(msi);
		temp--;
		if (min > static_cast<unsigned int>(*msi - *temp))
			min = static_cast<unsigned int>(*msi - *temp);
	}
	if (min == 0)
		throw (span::NoSpanException());
	return (min);
}

unsigned int	span::longestSpan(void)
{
	unsigned int	max;

	if (this->numbers.size() <= 1)
		throw (span::NoSpanException());
	max = *(--this->numbers.end()) - *(this->numbers.begin());
	if (max == 0)
		throw (span::NoSpanException());
	return (max);
}