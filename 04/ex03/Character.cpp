#include "Character.hpp"

Character::Character(std::string const &name): ICharacter(), name(name)
{
	// std::cout << GREY << "Character default constructor called " << WHITE << std::endl;
	int i = 0;
	while(i < 4)
	{
		array[i] = NULL;
		i++;
	}
}

Character::Character(Character const &src): ICharacter()
{
	// std::cout << GREY << "Character copy constructor called " << WHITE << std::endl;
	*this = src;
}

Character::~Character(void)
{
	// std::cout << GREY << "Character Destructor called " << WHITE << std::endl;
}

Character &Character::operator=(Character const &rhs)
{
	// std::cout << "Character Assignation operator called." << std::endl;
	if (this != &rhs)
	{
		this->name = rhs.getName();
		int i = 0;
		if(i < 4)
		{
			array[i] = rhs.array[i];
			i++;///
		}
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	int i = 0;
	while (array[i] != NULL)
	{
		i++;
	}
	if (i < 4)
		array[i] = m;
}

void Character::unequip(int idx)
{
	if(idx < 4 && idx >= 0 && array[idx])
		array[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if(idx < 4 && idx >= 0 && array[idx])
		array[idx]->use(target);
}
