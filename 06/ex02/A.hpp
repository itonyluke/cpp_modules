#ifndef A_HPP
# define A_HPP

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

class A : public Base
{

public:
	A();						//Canonical
	A(A const &src);			//Canonical
	virtual ~A(void);			//Canonical
	A &operator=(A const &rhs); //Canonical
	void print();
};

#endif
