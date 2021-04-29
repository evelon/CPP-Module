#include "Person.hpp"

Person::Person() {};

Person::Person(std::string name):
	name(name) {}

Person::~Person() {}

Person::Person(Person const& person):
	name(person.name)
{}

Person& Person::operator=(Person const& person)
{
	this->name = person.name;
	return (*this);
}
