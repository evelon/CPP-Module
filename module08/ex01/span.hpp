#include <exception>
#include <set>

class	span
{
private:
	std::multiset<int>	numbers;
	unsigned int		len;

	class	SpanFullException: public std::exception
	{
		virtual const char*	what(void) throw();
	};
	class	NoSpanException: public std::exception
	{
		virtual const char* what(void) throw();
	};

public:
	span();
	span(unsigned int len);
	span(span const& span);
	template<typename InputIterator>
	span(InputIterator begin, InputIterator last);
	~span();
	span&	operator=(span const& span);

	void			addNumber(int n) throw(std::exception);
	template<typename InputIterator>
	void			addNumber(InputIterator begin, InputIterator last);
	unsigned int	shortestSpan(void) throw(std::exception);
	unsigned int	longestSpan(void) throw(std::exception);
};