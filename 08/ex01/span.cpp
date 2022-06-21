#include "span.hpp"

Span::Span(unsigned int n) : N(n)
{
	if (n == 0)
		throw NotAppropriate();
	return;
}

Span::Span(Span const &src) : N(src.getN())
{
	*this = src;
	return;
}

Span::~Span(void)
{
	return;
}

Span &Span::operator=(Span const &src)
{
	if (this != &src)
	{
		N = src.getN();
		intvector.resize(N);
		intvector = src.intvector;
	}
	return *this;
}

unsigned int Span::getN() const
{
	return N;
}

void Span::addNumber(int n)
{
	if(!(intvector.size() <= N))
		throw ItIsFull();
	intvector.push_back(n);

	return;
}

int Span::shortestSpan()
{
	if(intvector.empty())
		throw ItIsEmpty();
	if(intvector.size()== 1)
		throw ItOneElem();
	std::sort(intvector.begin(), intvector.end());
	std::vector<int>::const_iterator i = intvector.begin();
	int temp = *(i + 1) - *(i);
	while (i + 1 != intvector.end())
	{
		int nspan = *(i + 1) - *(i);
		if (nspan < temp)
			temp = nspan;
		i++;
	}
	return(temp);
}

int Span::longestSpan()
{
	if(intvector.size() >= 2)
	{
		std::sort(intvector.begin(), intvector.end());
		int m = *(intvector.end() - 1 ) - *(intvector.begin());
		return(m);
	}
	return(0);
}

const char *Span::ItIsFull::what() const throw()
{
	{
		return ("Sorry, but the container is already full!");
	}
}

const char *Span::ItIsEmpty::what() const throw()
{
	{
		return ("Sorry, but the container is empty!");
	}
}

const char *Span::ItOneElem::what() const throw()
{
	{
		return ("Sorry, but the container has just one element!");
	}
}

const char *Span::NotAppropriate::what() const throw()
{
	{
		return ("Sorry, but the container should have some positive size and more than 0!");
	}
}

const char *Span::IndexNotAppropriate::what() const throw()
{
	{
		return ("Sorry, but the index is not appropriate!");
	}
}
int Span::operator[](unsigned int index) const
{
	if (index >= intvector.size())
		throw IndexNotAppropriate();
	return (intvector[index]);
}

size_t Span::size() const
{
	return(intvector.size());
}

std::ostream & operator<<( std::ostream & o, Span const & sp)
{
	size_t i = 0;
	o << "Span: ";
	while (i < sp.size())
	{
		o << sp[i] << " ";
		i++;
	}
	return (o);
}
