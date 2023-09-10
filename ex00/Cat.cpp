#include "Cat.hpp"

Cat::Cat() // : type("Cat") // xi chi ashxatum?
{
	this->type = "Cat";
	std::cout << "Cat default constructor called\n";
}

Cat::Cat(const Cat& other)
{
	// this->type = "Cat";
	this->type = other.type;
	std::cout << "Cat copy constructor called\n";
}

Cat& Cat::operator=(const Cat& other)
{
	if (this == &other)
		return (*this);	
	// this->type = "Cat";
	this->type = other.type;
	std::cout << "Cat copy assignment operator called\n";
	return (*this);	
}

Cat::~Cat()
{
	std::cout << "Cat destructor called\n";
}

//------------------------------------------

