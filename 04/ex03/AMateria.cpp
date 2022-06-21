#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(std::string const &type): type(type)
{
	// std::cout << GREY << "AMateria default constructor called " << WHITE << std::endl;
}

AMateria::AMateria(AMateria const &src)
{
	// std::cout << GREY << "AMateria copy constructor called " << WHITE << std::endl;
	*this = src;
}

AMateria::~AMateria(void)
{
	// std::cout << GREY << "AMateria Destructor called " << WHITE << std::endl;
}

std::string const & AMateria::getType(void) const
{
	return (this->type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "USE " << target.getName() << std::endl;
}

AMateria &AMateria::operator=(AMateria const &rhs)
{
	// std::cout << "AMateria Assignation operator called." << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.getType();
	}
	return (*this);
}

