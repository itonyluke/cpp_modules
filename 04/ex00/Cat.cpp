#include "Cat.hpp"

Cat::Cat(void): sound("meow meow")
{
	this->type = "Cat";
	std::cout << UNDERSCORE << "Cat default constructor called " << WHITE << std::endl;
}

Cat::Cat(Cat const &src)
{
	std::cout << UNDERSCORE << "Cat copy constructor called " << WHITE << std::endl;
	*this = src;
}

Cat::~Cat(void)
{
	std::cout << UNDERSCORE << "Cat Destructor called " << WHITE << std::endl;
}

std::string Cat::getSound(void) const
{
	return (this->sound);
}

void Cat::makeSound(void) const
{
	std::cout << GREEN << type << WHITE << " makes sound " << BOLD << sound << WHITE << std::endl;
}

Cat &Cat::operator=(Cat const &rhs)
{
	std::cout << "Cat Assignation operator called." << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.Animal::getType();
		this->sound = rhs.getSound();
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &o, Cat const &i)
{
	o << GREEN << i.Animal::getType() << WHITE;
	return (o);
}
