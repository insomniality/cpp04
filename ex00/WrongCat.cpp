#include "WrongCat.hpp"

WrongCat::WrongCat() // : type("WrongCat") // xi chi ashxatum?
{
	this->type = "WrongCat";
	std::cout << "WrongCat default constructor called\n";
}

WrongCat::WrongCat(const WrongCat& other)
{
	// this->type = "WrongCat";
	this->type = other.type;
	std::cout << "WrongCat copy constructor called\n";
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	if (this == &other)
		return (*this);	
	// this->type = "WrongCat";
	this->type = other.type;
	std::cout << "WrongCat copy assignment operator called\n";
	return (*this);	
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called\n";
}

//------------------------------------------

