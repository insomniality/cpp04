#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	
	// ...
	const Animal *meta1 = new Animal();
	const Animal *i1 = new Cat();
	std::cout << i1->getType() << " " << std::endl;
	i1->makeSound();
	meta1->makeSound();

	delete meta1;
	delete i1;

	delete meta;
	delete j;
	delete i;

	return (0);
}