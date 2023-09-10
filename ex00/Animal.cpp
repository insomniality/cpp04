#include "Animal.hpp"

Animal::Animal() // : type("Animal") // xi chi ashxatum?
{
	this->type = "Animal";
	std::cout << "Animal default constructor called\n";
}

Animal::Animal(const Animal& other)
{
	// this->type = "Animal";
	this->type = other.type;
	std::cout << "Animal copy constructor called\n";
}

Animal& Animal::operator=(const Animal& other)
{
	if (this == &other)
		return (*this);	
	// this->type = "Animal";
	this->type = other.type;
	std::cout << "Animal copy assignment operator called\n";
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called\n";
}

//------------------------------------------

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << this->type << " makes a sound\n";
}
