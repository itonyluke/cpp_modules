#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat: public virtual WrongAnimal
{
private:
	std::string sound;
public:
	WrongCat(void); //Canonical
	WrongCat(WrongCat const &src); //Canonical
	virtual ~WrongCat(void);//Canonical
	virtual void makeSound() const;
	std::string getType(void) const;
	std::string getSound(void) const;
	WrongCat &operator=(WrongCat const &rhs); //Canonical
};

#endif
