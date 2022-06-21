#ifndef C_HPP
# define C_HPP

# include <iostream>
# include <string>
# include <iostream>
# include <exception>
# include "Base.hpp"

class C : public Base
{
public:
	C();						//Canonical
	C(C const &src);			//Canonical
	virtual ~C(void);			//Canonical
	C &operator=(C const &rhs); //Canonical
	void print();
};

#endif
