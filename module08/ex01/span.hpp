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
	template<typename InputIterator>
	span(InputIterator const& begin, InputIterator const& last);
	~span();
	span&	operator=(span const& span);

	void			addNumber(int n) throw(std::exception);
	template<typename InputIterator>
	void			addNumber(InputIterator const& begin, InputIterator const& last);
	unsigned int	shortestSpan(void) throw(std::exception);
	unsigned int	longestSpan(void) throw(std::exception);
};