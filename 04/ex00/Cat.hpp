#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat: public virtual Animal
{
private:
	std::string sound;
public:
	Cat(void); //Canonical
	Cat(Cat const &src); //Canonical
	virtual ~Cat(void);//Canonical
	virtual void makeSound() const;
	std::string getType(void) const;
	std::string getSound(void) const;
	Cat &operator=(Cat const &rhs); //Canonical
};

#endif
