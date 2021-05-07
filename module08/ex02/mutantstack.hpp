#include <stack>
#include <list>

template	<typename T>
class	MutantStack : public std::stack<T>
{
public:
	MutantStack(): std::stack<T>() {};
	MutantStack(MutantStack const& ms): std::stack<T>(ms) {};
	~MutantStack() {};
	MutantStack&	operator=(MutantStack const& ms)
	{
		*this = ms;
	}

	typedef typename c::iterator			iterator;
	typedef typename c::const_iterator	const_iterator;

	iterator		begin(void)
	{ return std::stack<T>::c::begin(); };
	const_iterator	begin(void) const
	{ return std::stack<T>::c::begin(); };
	iterator		end(void)
	{ return std::stack<T>::c::end(); };
	const_iterator	end(void) const
	{ return std::stack<T>::c::end(); };
	iterator		rbegin(void)
	{ return std::stack<T>::c::rbegin(); };
	const_iterator	rbegin(void) const
	{ return std::stack<T>::c::rbegin(); };
	iterator		rend(void)
	{ return std::stack<T>::c::rend(); };
	const_iterator	rend(void) const
	{ return std::stack<T>::c::rend(); };
	iterator		cbegin(void)
	{ return std::stack<T>::c::cbegin(); };
	const_iterator	cbegin(void) const
	{ return std::stack<T>::c::cbegin(); };
	iterator		cend(void)
	{ return std::stack<T>::c::cend(); };
	const_iterator	cend(void) const
	{ return std::stack<T>::c::cend(); };
	iterator		crbegin(void)
	{ return std::stack<T>::c::crbegin(); };
	const_iterator	crbegin(void) const
	{ return std::stack<T>::c::crbegin(); };
	iterator		crend(void)
	{ return std::stack<T>::c::crend(); };
	const_iterator	crend(void) const
	{ return std::stack<T>::c::crend(); };
};