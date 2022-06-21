#include "Dog.hpp"

Dog::Dog(void): sound("woof woof")
{
	this->type = "Dog";
	std::cout << ITALIC << "Dog default constructor called " << WHITE << std::endl;
}

Dog::Dog(Dog const &src)
{
	std::cout << ITALIC << "Dog copy constructor called " << WHITE << std::endl;
	*this = src;
}

Dog::~Dog(void)
{
	std::cout << ITALIC << "Dog Destructor called " << WHITE << std::endl;
}

std::string Dog::getSound(void) const
{
	return (this->sound);
}

void Dog::makeSound(void) const
{
	std::cout << GREEN << type  << WHITE << " makes sound " << BOLD << sound << WHITE << std::endl;
}

Dog &Dog::operator=(Dog const &rhs)
{
	std::cout << "Dog Assignation operator called." << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.Animal::getType();
		this->sound = rhs.getSound();
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &o, Dog const &i)
{
	o << GREEN << i.Animal::getType() << WHITE;
	return (o);
}
