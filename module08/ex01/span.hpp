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
	template<typename Iterator>
	span(Iterator const& begin, Iterator const& last);
	~span();
	span&	operator=(span const& span);

	void			addNumber(int n);
	template<typename Iterator>
	void			addNumber(Iterator const& begin, Iterator const& last);
	unsigned int	shortestSpan(void);
	unsigned int	longestSpan(void);
};