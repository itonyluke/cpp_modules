#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
private:
	int					fixed_point_value;						// store the fixed point value.
	static const int	number_of_fractional_bits = 8; 			// store the number of fractional bits

public:
	Fixed(void);						//Canonical
	Fixed(const Fixed &src);			//Canonical
	~Fixed(void);						//Canonical

	Fixed &operator=(const Fixed &rhs); //Canonical

	int getRawBits(void) const;			//returns the raw value of the fixed point value
	void setRawBits(int const raw);		// sets the raw value of the fixed point value.
};

#endif
