#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

MateriaSource::MateriaSource(): IMateriaSource()
{
	// std::cout << GREY << "MateriaSource default constructor called " << WHITE << std::endl;
	int i = 0;
	while(i < 4)
	{
		array[i] = NULL;
		i++;
	}
}

MateriaSource::MateriaSource(MateriaSource const &src): IMateriaSource()
{
	// std::cout << GREY << "MateriaSource copy constructor called " << WHITE << std::endl;
	*this = src;
}

MateriaSource::~MateriaSource(void)
{
	// std::cout << GREY << "MateriaSource Destructor called " << WHITE << std::endl;
}

void MateriaSource::learnMateria(AMateria *materia)
{
	int i = 0;
	while (array[i])
	{
		i++;
	}
	if (i < 4)
		array[i] = materia;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	int i = 0;
	while (i < 4)
	{	
		if(!array[i])
			break;
		std::string temptype = array[i]->getType();
		if (temptype.compare(type) == 0)
			return(array[i]);
		i++;
	}
	return(NULL);
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
	// std::cout << "MateriaSource Assignation operator called." << std::endl;
	if (this != &rhs)
	{
		int i = 0;
		while (i < 4)
		{
			array[i] = rhs.array[i];
			i++;
		}
	}
	return (*this);
}

