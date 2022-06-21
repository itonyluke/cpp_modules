#include "C.hpp"

C::C() : Base()
{
	// std::cout << GREY << "C default constructor called " << WHITE << std::endl;
	return;
}

C::C(C const &src)
{
	// std::cout << GREY << "C copy constructor called " << WHITE << std::endl;
	*this = src;
	return;
}

C::~C(void)
{
	// std::cout << GREY << "C Destructor called " << WHITE << std::endl;
	return;
}

C &C::operator=(C const &)
{
	// std::cout << "C Assignation operator called." << std::endl;
	return *this;
}

void C::print()
{
	std::cout << "C" << std::endl;
}
