#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << ITALIC << "Brain default constructor called " << WHITE << std::endl;
}

Brain::Brain(Brain const &src)
{
	std::cout << ITALIC << "Brain copy constructor called " << WHITE << std::endl;
	*this = src;
}

Brain::~Brain(void)
{
	std::cout << ITALIC << "Brain Destructor called " << WHITE << std::endl;
}

std::string Brain::getIdeas(int n) const
{
	if (n < COUNT && n >= 0)
	{
		return (this->ideas[n]);
	}
	std::cout << "Sorry, but I don't have this index";
	return (NULL);
}

void Brain::setIdeas(std::string idea)
{
	int i = 0;
	while (i < COUNT)
	{
		ideas[i] = idea;
		i++;
	}
}

void Brain::printIdeas(void)
{
	int i = 0;
	while(i < COUNT)
	{
		std::cout << getIdeas(i) << std::endl;
		i++;
	}
}

Brain &Brain::operator=(Brain const &rhs)
{
	std::cout << "Brain Assignation operator called." << std::endl;
	if (this != &rhs)
	{
		int i = 0;
		while (i < COUNT)
		{
			this->ideas[i] = rhs.getIdeas(i);
			i++;
		}
	}
	return (*this);
}

