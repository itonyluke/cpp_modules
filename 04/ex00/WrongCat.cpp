#include "WrongCat.hpp"

WrongCat::WrongCat(void): sound("meow meow")
{
	this->type = "WrongCat";
	std::cout << UNDERSCORE << "WrongCat default constructor called " << WHITE << std::endl;
}

WrongCat::WrongCat(WrongCat const &src)
{
	std::cout << UNDERSCORE << "WrongCat copy constructor called " << WHITE << std::endl;
	*this = src;
}

WrongCat::~WrongCat(void)
{
	std::cout << UNDERSCORE << "WrongCat Destructor called " << WHITE << std::endl;
}

std::string WrongCat::getSound(void) const
{
	return (this->sound);
}

void WrongCat::makeSound(void) const
{
	std::cout << RED << type  << WHITE << " makes sound " << BOLD << sound << WHITE << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
	std::cout << "WrongCat Assignation operator called." << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.WrongAnimal::getType();
		this->sound = rhs.getSound();
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &o, WrongCat const &i)
{
	o << RED << i.WrongAnimal::getType() << WHITE;
	return (o);
}
