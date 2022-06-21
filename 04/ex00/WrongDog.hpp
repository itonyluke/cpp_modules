#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP
# include "WrongAnimal.hpp"

class WrongDog: public virtual WrongAnimal
{
private:
	std::string sound;
public:
	WrongDog(void); //Canonical
	WrongDog(WrongDog const &src); //Canonical
	virtual ~WrongDog(void);//Canonical
	virtual void makeSound() const;
	std::string getType(void) const;
	std::string getSound(void) const;
	WrongDog &operator=(WrongDog const &rhs); //Canonical
};

#endif
