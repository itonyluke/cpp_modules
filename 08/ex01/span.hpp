#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <map>
# include <vector>
# include <list>
# include <algorithm>
# include <set>
# include <iostream>
# include <iomanip>

# define GREY "\033[2m"
# define WHITE "\033[0m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define COLOR "\033[36m"
# define START_END "********************************************************************************"

class Span
{
private:
	unsigned int N;
	std::vector <int>	intvector;

public:
	class NotAppropriate : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	class IndexNotAppropriate : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	class ItIsFull : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	class ItIsEmpty : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	class ItOneElem : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	Span(unsigned int i);				//Canonical
	Span(Span const &src);				//Canonical
	virtual ~Span(void);				//Canonical
	Span &operator=(Span const &rhs);	//Canonical
	unsigned int getN() const;
	int shortestSpan();
	int longestSpan();
	void addNumber(int n);
	int operator[](unsigned int index) const;
	template <typename T>
	void	addNumberIt(typename T::iterator beg, typename T::iterator endd)
	{
		if (std::distance(intvector.end(), intvector.begin() + N) < std::distance(beg, endd))
			throw ItIsFull();;
		intvector.insert(intvector.begin() + intvector.size(), beg, endd);
	}
	size_t size() const;
};

std::ostream & operator<<( std::ostream & o, Span const & i);

#endif
