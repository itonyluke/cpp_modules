#include "Ice.hpp"

Ice::Ice(void): AMateria("ice")
{
	// std::cout << BGBLUE << "Ice default constructor called " << WHITE << std::endl;
}

Ice::Ice(Ice const &src): AMateria("ice")
{
	// std::cout << BGBLUE << "Ice copy constructor called " << WHITE << std::endl;
	*this = src;
}

Ice::~Ice(void)
{
	// std::cout << BGBLUE << "Ice Destructor called " << WHITE << std::endl;
}

Ice *Ice::clone() const
{
	// std::cout << "Ice Cloning called" << std::endl;
	Ice *m = new Ice();
	return (m);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice &Ice::operator=(Ice const &rhs)
{
	// std::cout << "Ice Assignation operator called." << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.getType();
	}
	return (*this);
}

// std::ostream &operator<<(std::ostream &o, Ice const &i)
// {
// 	o << RED << i.getType() << WHITE;
// 	return (o);
// }
