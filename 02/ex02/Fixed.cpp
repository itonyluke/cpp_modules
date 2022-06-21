#include "Fixed.hpp"

Fixed::Fixed(void) : fixed_point_value( 0 )
{
	// std::cout << "Default constructor called " << std::endl;
}
Fixed::Fixed( const int n ) //: fixed_point_value( n )
{
	// std::cout << "Int constructor called " << std::endl;
	fixed_point_value = n << number_of_fractional_bits;
}
Fixed::Fixed( const float fn )//: fixed_point_value( n )
{
	// std::cout << "Float constructor called " << std::endl;
	fixed_point_value = roundf(fn * ( 1 << number_of_fractional_bits));
}
Fixed::Fixed( const Fixed & src )
{
	// std::cout << "Copy constructor called " << std::endl;
	*this = src;
}
Fixed::~Fixed(void)
{
	// std::cout << "Destructor called " << std::endl;
}

int		Fixed::getRawBits(void) const
{
	return (fixed_point_value);
}
void	Fixed::setRawBits(const int raw)
{
	this->fixed_point_value= raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)fixed_point_value / (float)(1 << number_of_fractional_bits));
}
int		Fixed::toInt(void) const
{
	return (fixed_point_value >> number_of_fractional_bits);
}

Fixed &	Fixed::operator=( const Fixed & rhs )
{
	// std::cout << "Assignation operator called " << std::endl;
	if (this != &rhs)
	{
		// this->fixed_point_value = rhs.getRawBits();
		this->fixed_point_value = rhs.fixed_point_value;
	}
	else
		std::cout << "It is self assigning " << std::endl;
	return (*this);
}
std::ostream & operator<<( std::ostream & o, const Fixed & fixed)
{
	o << fixed.toFloat();
	return (o);
}

//Six comparison operators:
bool	Fixed::operator>( const Fixed & fixed)
{	
	// std::cout << "> operator called " << std::endl;
	return (this->fixed_point_value > fixed.fixed_point_value);
}

bool	Fixed::operator<( const Fixed & fixed)
{
	// std::cout << "< operator called " << std::endl;
	return (this->fixed_point_value < fixed.fixed_point_value);
}
bool	Fixed::operator>=( const Fixed & fixed)
{
	// std::cout << ">= operator called " << std::endl;
	return (this->fixed_point_value >= fixed.fixed_point_value);
}
bool	Fixed::operator<=( const Fixed & fixed)
{
	// std::cout << "<= operator called " << std::endl;
	return (this->fixed_point_value <= fixed.fixed_point_value);
}
bool	Fixed::operator==( const Fixed & fixed)
{
	// std::cout << "== operator called " << std::endl;
	return (this->fixed_point_value == fixed.fixed_point_value);
}
bool	Fixed::operator!=( const Fixed & fixed)
{
	// std::cout << "!= operator called " << std::endl;
	return !(this->fixed_point_value == fixed.fixed_point_value);
}

//Four arithmetic operators:
Fixed	Fixed::operator+( const Fixed & fixed)
{
	std::cout << "Addition operator called " << std::endl;
	return (Fixed(this->fixed_point_value + fixed.fixed_point_value));
}
Fixed	Fixed::operator-( const Fixed & fixed)
{
	std::cout << "Subtraction operator called " << std::endl;
	return (Fixed(this->fixed_point_value - fixed.fixed_point_value));
}
Fixed	Fixed::operator*( const Fixed & fixed)
{
	std::cout << "Multiplication operator called " << std::endl;
	return (Fixed(toFloat() * fixed.toFloat()));
}
Fixed	Fixed::operator/( const Fixed & fixed)
{
	std::cout << "Division operator called " << std::endl;
	return (Fixed(toFloat() / fixed.toFloat()));
}

//The increment or decrement operators:
// prefix increment
Fixed	&	Fixed::operator++(void)
{
	// std::cout << "prefix increment operator called " << std::endl;
	fixed_point_value++;
	return (*this);// return new value by reference
}
// postfix increment
Fixed	Fixed::operator++(int)
{
	Fixed old(*this); // copy old value
	++*this;  // prefix increment
	return (old);	// return old value
}
Fixed	&	Fixed::operator--(void)
{
	// std::cout << "prefix increment operator called " << std::endl;
	fixed_point_value--;
	return (*this);// return new value by reference
}
// postfix increment
Fixed	Fixed::operator--(int)
{
	Fixed old(*this); // copy old value
	--*this;  // prefix increment
	return (old);	// return old value
}

Fixed Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	return (fixed1 > fixed2 ? fixed1 : fixed2);
}

const Fixed Fixed::max(const Fixed & fixed1, const Fixed & fixed2)
{
	return (fixed1.getRawBits() > fixed2.getRawBits() ? fixed1 : fixed2);
}

Fixed Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	return (fixed1 < fixed2 ? fixed1 : fixed2);
}

const Fixed Fixed::min(const Fixed & fixed1, const Fixed & fixed2)
{
	return (fixed1.getRawBits() < fixed2.getRawBits() ? fixed1 : fixed2);
}
