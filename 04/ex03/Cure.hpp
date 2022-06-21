#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure: public AMateria
{
public:
	Cure(void); //Canonical
	Cure(Cure const &src); //Canonical
	virtual ~Cure(void);//Canonical
	Cure &operator=(Cure const &rhs); //Canonical

	Cure *clone() const;
	void use(ICharacter &target);
};

#endif
