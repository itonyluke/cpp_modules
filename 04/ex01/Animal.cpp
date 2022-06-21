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
	std::cout << GREEN << type << WHITE << " makes " << MAGENTA << "no sound" << WHITE << std::endl;
}

void Animal::setIdeas(std::string idea)
{
	std::cout << "OH, but I don't have a brain, so I can't put \"" << idea << "\"" << std::endl;
}

void Animal::printIdeas(void)
{
	std::cout << "OH, but I don't have a brain and I don't have ideas." << std::endl;
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

