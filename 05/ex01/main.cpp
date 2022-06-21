#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << GREY << START_END << WHITE << std::endl;
	try
	{
		// // check constructor
		// Form m("m", 155, 1);
		// std::cout << m << std::endl;

		// // check constructor
		// Form m("m", 1, 200);
		// std::cout << m << std::endl;


		// check functions
		Bureaucrat William("William", 12);
		Bureaucrat Richard("Richard", 80);
		std::cout << William << std::endl;
		Form first("first", 13, 14);
		std::cout << first;
		Richard.signForm(first);
		William.signForm(first);
		Richard.signForm(first);
		William.signForm(first);
		std::cout << first;

		Form second("second", 11, 14);;
		std::cout << second;
		William.signForm(second);
		std::cout << second;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << GREY << START_END << WHITE << std::endl;
	return (0);
}

