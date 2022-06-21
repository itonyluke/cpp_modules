#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *array[4];

public:
	MateriaSource(void);	 //Canonical
	MateriaSource(MateriaSource const &src); //Canonical
	virtual ~MateriaSource(void);			 //Canonical
	void learnMateria(AMateria *materia);
	AMateria *createMateria(std::string const &type);
	MateriaSource &operator=(MateriaSource const &rhs); //Canonical
};

#endif
