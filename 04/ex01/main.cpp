#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(void)
{
//	development phase

//	Dog doga;
//	doga.setIdeas("I am AAAAAAA");
//	std::cout << "AAAAAA" << std::endl;
//	doga.printIdeas();
//	Dog dogb;
//	std::cout << "BBBBBB" << std::endl;
//	dogb.setIdeas("I am BBBBBBB");
//	dogb.printIdeas();
//	std::cout << "AAAAA" << std::endl;
//	doga = dogb;
//	doga.printIdeas();
//	const Animal *j = new Dog();
//	const Animal *i = new Cat();
//	delete j; //should not create a leak
//	delete i;
//
//	Animal *a = new Dog();
//	a->printIdeas();
//	a->setIdeas("I should bark all the time.");
//	a->printIdeas();
//
//	Dog b;
//	b.setIdeas("lalala");
//	b.printIdeas();
//	Animal *c = new Dog(b);
//	c->printIdeas();
//	delete c;
//	delete a;


//	final phase
	Animal *array[COUNT];// = Animal;
	int i = 0;
	while (i < COUNT)
	{
		if (i < (COUNT/2))
			array[i] = new Dog();
		else
			array[i] = new Cat();
		i++;
	}

	array[0]->setIdeas("I am dog and first");
	array[1]->setIdeas("I am dog and second");
	array[2]->setIdeas("I am dog and third");
	array[3]->setIdeas("I am dog and fourth");
	array[4]->setIdeas("I am dog and fifth");
	array[5]->setIdeas("I am cat and sixth");
	array[6]->setIdeas("I am cat and seventh");
	array[7]->setIdeas("I am cat and eighth");
	array[8]->setIdeas("I am cat and ninth");
	array[9]->setIdeas("I am cat and tenth");

	array[0]->printIdeas();
	array[1]->printIdeas();
	array[2]->printIdeas();
	array[3]->printIdeas();
	array[4]->printIdeas();
	array[5]->printIdeas();
	array[6]->printIdeas();
	array[7]->printIdeas();
	array[8]->printIdeas();
	array[9]->printIdeas();
	i = 0;
	while (i < COUNT)
	{
		delete array[i];
		i++;
	}

//
//	main for tests from Subject

//	const Animal* j = new Dog();
//	const Animal* l = new Cat();
//	delete j;//should not create a leak
//	delete l;

}

