#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog: public virtual Animal
{
private:
	std::string sound;
public:
	Dog(void); //Canonical
	Dog(Dog const &src); //Canonical
	virtual ~Dog(void);//Canonical
	virtual void makeSound() const;
	std::string getType(void) const;
	std::string getSound(void) const;
	Dog &operator=(Dog const &rhs); //Canonical
};

#endif
