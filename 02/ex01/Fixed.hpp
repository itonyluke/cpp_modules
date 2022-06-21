#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					fixed_point_value;					// store the fixed point value.
	static const int	number_of_fractional_bits = 8; 		// store the number of fractional bits

public:
	Fixed(void); //Canonical
	Fixed(const int n);
	Fixed(const float fn);
	Fixed(const Fixed &src); //Canonical
	~Fixed(void);			 //Canonical

	Fixed &operator=(Fixed const &rhs); //Canonical

	int getRawBits(void) const;		//returns the raw value of the fixed point value
	void setRawBits(const int raw); // sets the raw value of the fixed point value
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream &operator<<(std::ostream &o, const Fixed &i);

#endif
