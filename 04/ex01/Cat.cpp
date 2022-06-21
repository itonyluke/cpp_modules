#include "Cat.hpp"

Cat::Cat(void): sound("meow meow")
{
	type = "Cat";
	cat_brain = new Brain();
	std::cout << GREEN << "Cat default constructor called " << WHITE << std::endl;
}

Cat::Cat(Cat const &src)
{
	std::cout << GREEN << "Cat copy constructor called " << WHITE << std::endl;
	*this = src;
}

Cat::~Cat(void)
{
	std::cout << GREEN << "Cat Destructor called " << WHITE << std::endl;
	delete cat_brain;
}

std::string Cat::getSound(void) const
{
	return (this->sound);
}

void Cat::makeSound(void) const
{
	std::cout << GREEN << type << WHITE << " makes sound " << MAGENTA << sound << WHITE << std::endl;
}

void Cat::setIdeas(std::string idea)
{
	cat_brain->setIdeas(idea);
}

std::string Cat::getIdeas(int n) const
{
	return (cat_brain->getIdeas(n));
}

void Cat::printIdeas()
{
	cat_brain->printIdeas();
}

Cat &Cat::operator=(Cat const &rhs)
{
	std::cout << "Cat Assignation operator called." << std::endl;
	if (this != &rhs)
	{
		type = rhs.Animal::getType();
		sound = rhs.getSound();
		delete cat_brain;
		cat_brain = new Brain(*rhs.cat_brain);
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &o, Cat const &i)
{
	o << GREEN << i.Animal::getType() << WHITE;
	return (o);
}
