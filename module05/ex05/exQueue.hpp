#ifndef EXQUEUE_HPP
# define EXQUEUE_HPP

# include <exception>

# include "Bureaucrat.hpp"
# include <string>

template <class T>
class	exQueue
{
private:
	int				size;
	T*				queue;
	int				first;
	int				last;
	bool			empty;
	std::exception*	too_many;
	std::exception*	none;

	exQueue();

public:
	exQueue(int size, std::exception* too_many, std::exception* none);
	exQueue(exQueue<T> const& q);
	~exQueue();
	exQueue<T>&	operator=(exQueue<T> const& q);

	void	enq(T t) throw(std::exception);
	T&		deq(void) throw(std::exception);
};

// template class	exQueue<Bureaucrat*>;
// template class	exQueue<std::string>;

#endif
