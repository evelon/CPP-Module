#include "exQueue.hpp"

template <class T>
exQueue<T>::exQueue(int size, std::exception too_many, std::exception none):
	size(size),
	queue(new T[this->size]),
	first(0), last(0),
	empty(true),
	too_many(too_many), none(none)
{}

template <class T>
exQueue<T>::exQueue(exQueue<T> const& q):
	size(q.size),
	queue(new T[this->size]),
	first(q.first), last(q.last),
	empty(q.empty),
	too_many(q.too_many), none(q.none)
{
	if (this->first > this->last)
	{
		for (int i = this->first; i < size; i++)
			queue[this->first + i] = q.queue[this->first + i];
		for (int i = 0; i < this->last; i++)
			queue[i] = q.queue[i];
	}
	else
		for (int i = this->first; i < this->last; i++)
			queue[i] = q.queue[i];
	this->too_many = q.too_many;
	this->none = q.none;
}

template <class T>
exQueue<T>::~exQueue()
{
	delete this->queue;
}

template <class T>
exQueue<T>&	exQueue<T>::operator=(exQueue<T> const& q)
{
	delete this->queue;
	this-size = q.size;
	this->queue = new T[this->size];
	this->first = q.first;
	this->last = q.last;
	this->empty = q.empty;
	if (this->first > this->last)
	{
		for (int i = this->first; i < size; i++)
			queue[this->first + i] = q.queue[this->first + i];
		for (int i = 0; i < this->last; i++)
			queue[i] = q.queue[i];
	}
	else
		for (int i = this->first; i < this->last; i++)
			queue[i] = q.queue[i];
	this->too_many = q.too_many;
	this->none = q.none;
}

template <class T>
void	exQueue<T>::enq(T t) throw(std::exception)
{
	if (this->last == this->first && !this->empty)
		throw (this->too_many);
	this->emtpy = false;
	this->queue[this->last++] = t;
	if (this->last == size)
		this->last = 0;
}

template <class T>
T&	exQueue<T>::deq(void) throw(std::exception)
{
	if (this->empty)
		throw (this->none);
	int temp = this->first++;
	if (this->first == this->last)
		this->empty = true;
	return (this->queue[temp]);
}