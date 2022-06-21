#include "span.hpp"

// int print()
int main()
{
	std::cout << GREY << START_END << WHITE << std::endl;
	try
	{
		std::cout << GREEN << "Span sp" << WHITE << std::endl;
		 Span sp = Span(5);
		 sp.addNumber(5);
		 sp.addNumber(3);
		 sp.addNumber(17);
		 sp.addNumber(9);
		 sp.addNumber(11);
		 std::cout << sp << std::endl;
		std::cout << "The longest span: " << sp.longestSpan() << std::endl;
		std::cout << "The shortest span: " << sp.shortestSpan() << std::endl;

		std::cout << std::endl;
		std::cout << YELLOW << "Span sp1" << WHITE << std::endl;
		 Span sp1 = Span(6);
		 sp1.addNumber(5);
		 sp1.addNumber(-500);
		 sp1.addNumber(24);
		 std::cout << sp1 << std::endl;
		std::cout << "The longest span: " << sp1.longestSpan() << std::endl;
		std::cout << "The shortest span: " << sp1.shortestSpan() << std::endl;
//
//		 //CHECK addnumber
		std::cout << std::endl;
		std::cout << BLUE << "Span sp2" << WHITE << std::endl;
		Span sp2 = Span(13);
		 sp2.addNumber(23);
		 sp2.addNumber(25);
		 sp2.addNumber(26);
		 std::cout << sp2 << std::endl;
		std::cout << "The longest span: " << sp2.longestSpan() << std::endl;
		std::cout << "The shortest span: " << sp2.shortestSpan() << std::endl;
//
//		CHECK addnumberIt
		std::cout << std::endl;
		std::cout << COLOR << "Span sp3" << WHITE;
		std::vector<int> v;

		Span s = Span(1000);
//		int n = 23;
//		std::cout << "adding number " << n << std::endl;
		std::cout << std::endl;
//		s.addNumber(23);
		std::cout << s;
		for(int i = 0; i < 999; i++)
		{
			v.push_back(i * 7);
			std::cout << v[i] << ' ';
		}
		std::cout << std::endl;

		s.addNumberIt< std::vector<int> >(v.begin(), v.end());
		std::cout << std::endl;
		std::cout << "The longest span: " << s.longestSpan() << std::endl;
		std::cout << "The shortest span: " << s.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << GREY << START_END << WHITE << std::endl;
	return (0);
}
