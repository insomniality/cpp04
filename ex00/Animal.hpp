#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	public:
		Animal();
		Animal(const Animal&);
		Animal& operator=(const Animal&);
		~Animal();
	public:
		std::string getType() const;
		void makeSound() const;
	protected:
		std::string type;
};

#endif