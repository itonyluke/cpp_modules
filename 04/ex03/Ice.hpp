#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
// class ICharacter;

class Ice: public AMateria
{
public:
	Ice(void); //Canonical
	Ice(Ice const &src); //Canonical
	virtual ~Ice(void);//Canonical
	Ice &operator=(Ice const &rhs); //Canonical

	Ice *clone() const;
	void use(ICharacter &target);
};

#endif
