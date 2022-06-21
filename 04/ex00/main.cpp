#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete j;
	delete i;
	delete meta;

	const WrongAnimal *wmeta = new WrongAnimal();
	const WrongAnimal *k = new WrongDog();
	const WrongAnimal *l = new WrongCat();
	std::cout << k->getType() << " " << std::endl;
	std::cout << l->getType() << " " << std::endl;
	l->makeSound(); //will output the cat sound!
	k->makeSound();
	wmeta->makeSound();
	delete k;
	delete l;
	delete wmeta;

	return (0);
}
