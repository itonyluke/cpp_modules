#include <iostream>
#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	Fixed c(Fixed(5.05f) / Fixed(2));
	std::cout << "\033[90m0\033[0m " << c << std::endl;
	std::cout << "\033[90m1\033[0m " << a << std::endl;
	std::cout << "\033[90m2\033[0m " << ++a << std::endl;
	std::cout << "\033[90m3\033[0m " << a << std::endl;
	std::cout << "\033[90m4\033[0m " << a++ << std::endl;
	std::cout << "\033[90m5\033[0m " << a << std::endl;

	std::cout << "\033[90m6\033[0m " << b << std::endl;

	std::cout << "\033[90m7\033[0m " << Fixed::max(a, b) << std::endl;


	return 0;
}
