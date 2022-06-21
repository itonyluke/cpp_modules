#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): type("WrongAnimal"), sound ("HRUM-HRUM?")
{
	std::cout << GREY << "WrongAnimal default constructor called " << WHITE << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	std::cout << GREY << "WrongAnimal copy constructor called " << WHITE << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << GREY << "WrongAnimal Destructor called " << WHITE << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << RED << type << WHITE << " makes sound " << BOLD << sound << WHITE << std::endl;
}


WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
	std::cout << "WrongAnimal Assignation operator called." << std::endl;
	if (this != &rhs)
		this->type = rhs.getType();
	return (*this);
}

std::ostream &operator<<(std::ostream &o, WrongAnimal const &i)
{
	o << RED << i.getType() << WHITE;
	return (o);
}
