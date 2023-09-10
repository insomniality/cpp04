#include "Dog.hpp"

Dog::Dog() // : type("Dog") // xi chi ashxatum?
{
	this->type = "Dog";
	std::cout << "Dog default constructor called\n";
}

Dog::Dog(const Dog& other)
{
	// this->type = "Dog";
	this->type = other.type;
	std::cout << "Dog copy constructor called\n";
}

Dog& Dog::operator=(const Dog& other)
{
	if (this == &other)
		return (*this);	
	// this->type = "Dog";
	this->type = other.type;
	std::cout << "Dog copy assignment operator called\n";
	return (*this);	
}

Dog::~Dog()
{
	std::cout << "Dog destructor called\n";
}

//------------------------------------------

