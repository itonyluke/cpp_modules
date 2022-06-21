#include "B.hpp"

B::B() : Base()
{
	// std::cout << GREY << "B default constructor called " << WHITE << std::endl;
	return;
}

B::B(B const &src)
{
	// std::cout << GREY << "B copy constructor called " << WHITE << std::endl;
	*this = src;
	return;
}

B::~B(void)
{
	// std::cout << GREY << "B Destructor called " << WHITE << std::endl;
	return;
}

B &B::operator=(B const &)
{
	// std::cout << "B Assignation operator called." << std::endl;
	return *this;
}

void B::print()
{
	std::cout << "B" << std::endl;
}
