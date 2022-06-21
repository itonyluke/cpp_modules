#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed(void) : fixed_point_value(0)
{
	std::cout << "Default constructor called " << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called " << std::endl;
	*this = src;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called " << std::endl;
}

int Fixed::getRawBits(void) const
{

	std::cout << "getRawBits member function called " << std::endl;
	return (this->fixed_point_value);
}

void Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called " << std::endl;
	this->fixed_point_value = raw;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Assignation operator called " << std::endl;
	if (this != &rhs)
		this->fixed_point_value = rhs.getRawBits();
	else
		std::cout << "Error, it is self assigning " << std::endl;
	return (*this);
}
