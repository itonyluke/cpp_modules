#ifndef B_HPP
# define B_HPP

# define GREY "\033[2m"
# define WHITE "\033[0m"
# define YELLOW "\033[33m"
# define RED "\033[31m"
# define START_END "*****************************************************************************************************************************"

# include <iostream>
# include <string>
# include <iostream>
# include <exception>
# include "Base.hpp"

class B: public Base
{

public:
	B();	  //Canonical
	B(B const &src);			  //Canonical
	virtual ~B(void);					  //Canonical
	B &operator=(B const &rhs); //Canonical
	void print();
};

#endif
