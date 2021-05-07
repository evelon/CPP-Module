#include <exception>
#include <set>

class	span
{
private:
	std::multiset<int>	numbers;
	unsigned int		len;

	class	ExceedSpanSizeException: public std::exception
	{
		virtual const char*	what(void) const throw();
	};
	class	NoSpanException: public std::exception
	{
		virtual const char* what(void) const throw();
	};
	span();

public:
	span(unsigned int len);
	span(span const& span);
	template	<typename InputIterator>
	span(InputIterator const& begin, InputIterator const& last):
		numbers(), len(0)
	{
		this->len = last - begin;
		for (InputIterator start = begin; start != last; start++)
			this->numbers.insert(*start);
	};
	~span();
	span&	operator=(span const& span);

	void			addNumber(int n);
	template	<typename InputIterator>
	void			addNumber(InputIterator const& begin, InputIterator const& last)
	{
		if (last - begin + this->numbers.size() >= this->len)
			throw (span::ExceedSpanSizeException());
		for (InputIterator start = begin; start != last; start++)
			this->numbers.insert(*start);
	};
	unsigned int	shortestSpan(void);
	unsigned int	longestSpan(void);
};
