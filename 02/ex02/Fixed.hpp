#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>


class Fixed
{
private:
	int					fixed_point_value;// store the fixed point value.
	static const int	number_of_fractional_bits = 8;// store the number of fractional bits
public:
	Fixed();									//Canonical
	Fixed(const int n);
	Fixed(const float fn);
	Fixed(const Fixed & src);					//Canonical
	~Fixed(void);								//Canonical

	Fixed &	operator=( const Fixed & rhs );	//Canonical

	int		getRawBits(void) const; //returns the raw value of the fixed point value
	void	setRawBits(const int raw); // sets the raw value of the fixed point value.
	float	toFloat(void) const;
	int		toInt(void) const;

	bool operator>(const Fixed & i);
	bool operator<(const Fixed & i);
	bool operator>=(const Fixed & i);
	bool operator<=(const Fixed & i);
	bool operator!=(const Fixed & i);
	bool operator==(const Fixed & i);

	Fixed operator+(const Fixed & i);
	Fixed operator-(const Fixed & i);
	Fixed operator*(const Fixed & i);
	Fixed operator/(const Fixed & i);

	Fixed & operator++(void);
	Fixed & operator--(void);
	Fixed	operator++(int); 
	Fixed	 operator--(int);

	static Fixed max(Fixed & fixed1, Fixed & fixed2);
	static const Fixed max(const Fixed & fixed1, const Fixed & fixed2);
	static Fixed min(Fixed & fixed1, Fixed & fixed2);
	static const Fixed min(const Fixed & fixed1, const Fixed & fixed2);
};

	std::ostream & operator<<(std::ostream & o, const Fixed & i);

#endif
