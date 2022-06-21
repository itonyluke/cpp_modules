#ifndef BRAIN_HPP
# define BRAIN_HPP

# define WHITE "\033[0m"
# define GREY "\033[2m"
# define ITALIC "\033[3m"
# define UNDERSCORE "\033[4m"
# define GREEN "\033[32m"
# define BOLD "\033[97m"

# include <iostream>
# include <string>

# define COUNT 100

class Brain
{
protected:
	std::string ideas[COUNT];
public:
	std::string getIdeas(int n) const;
	void setIdeas(std::string idea);
	void printIdeas();
	Brain(void); //Canonical
	Brain(Brain const &src); //Canonical
	virtual ~Brain(void);//Canonical
	Brain &operator=(Brain const &rhs); //Canonical
};

#endif
