#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public virtual Animal
{
private:
	std::string sound;
	Brain* cat_brain;
public:
	Cat(void); //Canonical
	Cat(Cat const &src); //Canonical
	virtual ~Cat(void);//Canonical
	void makeSound() const;
	std::string getType(void) const;
	std::string getSound(void) const;
	std::string getIdeas(int n) const;
	void setIdeas(std::string idea);
	void printIdeas(void);
	Cat &operator=(Cat const &rhs); //Canonical
};

#endif
