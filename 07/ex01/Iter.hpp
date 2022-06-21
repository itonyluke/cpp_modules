#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>
# include <iomanip>

# define GREY "\033[2m"
# define WHITE "\033[0m"
# define START_END "********************************************************************************"

template <typename T>
void print(T const &x)
{
	std::cout << x << " ";
	return ;
}

template <typename T>
void Iter(T *address, int length, void (*func)(T const &))
{
	int i = 0;
	while (i < length)
	{
		func(address[i]);
		i++;
	}
	return ;
}

#endif
