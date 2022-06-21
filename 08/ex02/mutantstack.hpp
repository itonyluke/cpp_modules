#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <map>
# include <vector>
# include <list>
# include <algorithm>
# include <set>
# include <stack>
# include <iostream>
# include <iomanip>

# define GREY "\033[2m"
# define WHITE "\033[0m"
# define BWHITE "\033[97m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define COLOR "\033[36m"
# define START_END "********************************************************************************"
# define SPLIT "------------------------------------------------------------------------------------"

template <typename T>
class MutantStack: public std::stack <T>
{
private:

public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	MutantStack(){};												//Canonical
	MutantStack(MutantStack const &src): std::stack<T>(src){};		//Canonical
	virtual ~MutantStack(void){};									//Canonical
	MutantStack &operator=(MutantStack const &src)					//Canonical
	{
		if (this != &src)
		{
			std::stack<T>::operator=(src);
		}
	};
	iterator begin()
	{
		return(std::stack<T>::c.begin());
	};
	iterator end()
	{
		return(std::stack<T>::c.end());
	};
	const_iterator begin() const
	{
		return(std::stack<T>::c.begin());
	};
	const_iterator end() const
	{
		return(std::stack<T>::c.end());
	};

};

#endif
