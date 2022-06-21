#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	std::srand(std::time(0));
	int m = rand() % 3 + 1;
	Base *n = NULL;
	if (m == 1)
		n = new A();
	else if (m == 2)
		n = new B();
	else if (m == 3)
		n = new C();
	return (n);
}

void identify(Base *p)
{
	A *a = dynamic_cast<A *>(p);
	if (a)
		a->print();
	B *b = dynamic_cast<B *>(p);
	if (b)
		b->print();
	C *c = dynamic_cast<C *>(p);
	if (c)
		c->print();
	return;
}

void identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		a.print();
		return;
	}
	catch (const std::bad_cast &ex)
	{
	}

	try
	{
		B &b = dynamic_cast<B &>(p);
		b.print();
		return;
	}
	catch (const std::bad_cast &ex)
	{
	}

	try
	{
		C &c = dynamic_cast<C &>(p);
		c.print();
		return;
	}
	catch (const std::bad_cast &ex)
	{
	}
}

int main(void)
{
	Base *base_class = generate();
	identify(base_class);
	identify(*base_class);
	delete base_class;
	return (0);
}
