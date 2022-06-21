#include "Fixed.hpp"

Fixed::Fixed(void) : fixed_point_value(0)
{
	std::cout << "Default constructor called " << std::endl;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called " << std::endl;
	fixed_point_value = n << number_of_fractional_bits;
	return ;
}

Fixed::Fixed(const float fn)
{
	std::cout << "Float constructor called " << std::endl;
	fixed_point_value = (int)roundf(fn * (float)(1 << number_of_fractional_bits));
	return ;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called " << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called " << std::endl;
	return ;
}

int Fixed::getRawBits(void) const
{
	return (fixed_point_value);
}

void Fixed::setRawBits(const int raw)
{
	this->fixed_point_value = raw;
	return ;
}

float Fixed::toFloat(void) const
{
	return ((float)fixed_point_value / (float)(1 << number_of_fractional_bits));
}

int Fixed::toInt(void) const
{
	return (fixed_point_value >> number_of_fractional_bits);
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Assignation operator called " << std::endl;
	if (this != &rhs)
		this->fixed_point_value = rhs.getRawBits();
	else
		std::cout << "Error, it is selfassigning " << std::endl;
	return (*this);
}

std::ostream &operator<<(std::ostream &o, const Fixed &fixed)
{
	o << fixed.toFloat();
	return (o);
}
