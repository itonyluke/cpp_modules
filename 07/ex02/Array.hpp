#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <cstddef>

# define GREY "\033[2m"
# define WHITE "\033[0m"
# define START_END "********************************************************************************"

template <typename T>
class Array
{
public:
	Array()
	{
		array = NULL;
		_size = 0;
	}
	Array(unsigned int n)
	{
		_size = n;
		array = new T[_size];
	}
	Array(Array const &src) //Canonical
	{
		array = src.array;
		this->array = new T[0];
		*this = src;
		return;
	};

	Array &operator=(Array const &rhs) //Canonical
	{
		if (this != &rhs)
		{
			delete[] array;
			_size = rhs.size();
			array = new T[rhs.size()];
			int i = 0;
			while (i < rhs.size())
			{
				array[i] = rhs.array[i];
				i++;
			}
		}
		return *this;
	};
	~Array(void)
	{
		delete[] array;
	};

	class IndexNotAppropriate : public std::exception
	{
	public:
		virtual const char *what() const throw(){
			{return ("the index is not appropriate.");}
		};
	};

	int size(void) const
	{
		return (_size);
	};
	T &operator[](const unsigned int index)
	{
		if (index >= _size || index < 0)
			throw IndexNotAppropriate();
		return (array[index]);
	};


private:
	unsigned int _size;
	T *array;
};

#endif
