#include "A.hpp"

A::A() : Base()
{
	// std::cout << GREY << "A default constructor called " << WHITE << std::endl;
}

A::A(A const &src)
{
	// std::cout << YELLOW << "A copy constructor called " << WHITE << std::endl;
	*this = src;
}

A::~A(void)
{
	// std::cout << GREY << "A Destructor called " << WHITE << std::endl;
}

A &A::operator=(A const &)
{
	// std::cout << "A Assignation operator called." << std::endl;
	return (*this);
}

void A::print()
{
	std::cout << "A" << std::endl;
}
