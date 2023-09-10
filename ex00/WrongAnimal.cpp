#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() // : type("WrongAnimal") // xi chi ashxatum?
{
	this->type = "WrongAnimal";
	std::cout << "WrongAnimal default constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	// this->type = "WrongAnimal";
	this->type = other.type;

	std::cout << "WrongAnimal copy constructor called\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this == &other)
		return (*this);	
	// this->type = "WrongAnimal";
	this->type = other.type;
	std::cout << "WrongAnimal copy assignment operator called\n";
	return (*this);	
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called\n";
}

//------------------------------------------

std::string WrongAnimal::getType()
{
	return (this->type);
}

void WrongAnimal::makeSound()
{
	std::cout << this->type << " makes a sound\n";
}
