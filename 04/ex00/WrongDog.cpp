#include "WrongDog.hpp"

WrongDog::WrongDog(void): sound("woof woof")
{
	this->type = "WrongDog";
	std::cout << ITALIC << "WrongDog default constructor called " << WHITE << std::endl;
}

WrongDog::WrongDog(WrongDog const &src)
{
	std::cout << ITALIC << "WrongDog copy constructor called " << WHITE << std::endl;
	*this = src;
}

WrongDog::~WrongDog(void)
{
	std::cout << ITALIC << "WrongDog Destructor called " << WHITE << std::endl;
}

std::string WrongDog::getSound(void) const
{
	return (this->sound);
}

void WrongDog::makeSound(void) const
{
	std::cout << RED << type  << WHITE << " makes sound " << BOLD << sound << WHITE << std::endl;

}

WrongDog &WrongDog::operator=(WrongDog const &rhs)
{
	std::cout << "WrongDog Assignation operator called." << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.WrongAnimal::getType();
		this->sound = rhs.getSound();
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &o, WrongDog const &i)
{
	o << RED << i.WrongAnimal::getType() << WHITE;
	return (o);
}
