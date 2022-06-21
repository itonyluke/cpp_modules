#include "Dog.hpp"

Dog::Dog(void): sound("woof woof")
{
	type = "Dog";
	dog_brain = new Brain();
	std::cout << MAGENTA << "Dog default constructor called " << WHITE << std::endl;

}

Dog::Dog(Dog const & src)
{
	std::cout << MAGENTA << "Dog copy constructor called " << WHITE << std::endl;
	*this = src;
}

Dog::~Dog(void)
{
	std::cout << MAGENTA << "Dog Destructor called " << WHITE << std::endl;
	delete dog_brain;
}

std::string Dog::getSound(void) const
{
	return this->sound;
}

void Dog::makeSound(void) const
{
	std::cout << RED << type  << WHITE << " makes sound " << MAGENTA << sound << WHITE << std::endl;
}

void Dog::setIdeas(std::string idea)
{
	dog_brain->setIdeas(idea);

}

std::string Dog::getIdeas(int n) const
{
	return (dog_brain->getIdeas(n));
}

void Dog::printIdeas()
{
	dog_brain->printIdeas();
}

Dog &Dog::operator=(Dog const &rhs)
{
	std::cout << "Dog Assignation operator called." << std::endl;
	if (this != &rhs)
	{
		type = rhs.Animal::getType();
		sound = rhs.getSound();
		delete dog_brain;
		dog_brain = new Brain(*rhs.dog_brain);
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &o, Dog const &i)
{
	o << RED << i.Animal::getType() << WHITE;
	return (o);
}
