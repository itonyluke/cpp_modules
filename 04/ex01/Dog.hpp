#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public virtual Animal
{
private:
	Brain* dog_brain;
	std::string sound;
public:
	Dog(void); //Canonical
	Dog(Dog const &src); //Canonical
	virtual ~Dog(void);//Canonical

	void makeSound() const;
	std::string getType(void) const;
	std::string getSound(void) const;
	std::string getIdeas(int n) const;
	void setIdeas(std::string idea);
	void printIdeas(void);

	Dog &operator=(Dog const &rhs); //Canonical
};

#endif
