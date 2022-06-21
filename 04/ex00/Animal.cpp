#include "Animal.hpp"

Animal::Animal(void): type("Animal")
{
	std::cout << GREY << "Animal default constructor called " << WHITE << std::endl;
}

Animal::Animal(Animal const &src)
{
	std::cout << GREY << "Animal copy constructor called " << WHITE << std::endl;
	*this = src;
}

Animal::~Animal(void)
{
	std::cout << GREY << "Animal Destructor called " << WHITE << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->type);
}

void Animal::makeSound(void) const
{
	std::cout << GREEN << type << WHITE << " makes " << BOLD << "no sound" << WHITE << std::endl;
}

Animal &Animal::operator=(Animal const &rhs)
{
	std::cout << "Animal Assignation operator called." << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.getType();
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &o, Animal const &i)
{
	o << GREEN << i.getType() << WHITE;
	return (o);
}
