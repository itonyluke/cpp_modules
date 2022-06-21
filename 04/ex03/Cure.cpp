#include "Cure.hpp"

Cure::Cure(void): AMateria("cure")
{
	// std::cout << BGBLUE << "Cure default constructor called " << WHITE << std::endl;
}

Cure::Cure(Cure const &src): AMateria("Cure")
{
	// std::cout << BGBLUE << "Cure copy constructor called " << WHITE << std::endl;
	*this = src;
}

Cure::~Cure(void)
{
	// std::cout << BGBLUE << "Cure Destructor called " << WHITE << std::endl;
}

Cure *Cure::clone() const
{
	std::cout << "Cure Cloning called" << std::endl;
	Cure *m = new Cure();
	return (m);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;

}

Cure &Cure::operator=(Cure const &rhs)
{
	// std::cout << "Cure Assignation operator called." << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.getType();
	}
	return (*this);
}

