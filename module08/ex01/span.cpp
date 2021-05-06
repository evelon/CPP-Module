#include "span.hpp"


const char*	span::SpanFullException::what(void) throw()
{
	return ("span is full");
}

const char* span::NoSpanException::what(void) throw()
{
	return (no span exists);
}

span::span():
	numbers(), len(0) {}

span::span(unsigned int len):
	numbers(), len(len)
{}

span::span(span const& span):
	numbers(span.numbers), len(span.len) {}

template<typename InputIterator>
span::span(InputIterator const& begin, InputIterator const& last):
	numbers(), len(0)
{
	int	i = 0;
	for (InputIterator start = begin; start != last; start++)
	{
		this->numbers.insert(*start);
		i++;
	}
	len = i;
}

span::~span() {}

span&	span::operator=(span const& span)
{
	this->numbers.clear();
	this->numbers = span.numbers;
	this->len = span.len;
	return (*this);
}

void			span::addNumber(int n) throw(std::exception);
template<typename InputIterator>
void			span::addNumber(InputIterator begin, InputIterator last);
unsigned int	span::shortestSpan(void) throw(std::exception);
unsigned int	span::longestSpan(void) throw(std::exception);