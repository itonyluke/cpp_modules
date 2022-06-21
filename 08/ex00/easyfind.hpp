#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <deque>
# include <list>
# include <map>
# include <stack>
# include <queue>

# define GREY "\033[2m"
# define WHITE "\033[0m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define START_END "********************************************************************************"

template <typename T>
typename T::const_iterator easyfind( T & сontainer, int n)//Container const & a)
{
	return(std::find(сontainer.begin(), сontainer.end(), n));
}

#endif
