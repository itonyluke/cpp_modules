
#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << GREY << START_END << WHITE << std::endl;
	try
	{
		//check constructor 
		Bureaucrat m("John", 0);
		std::cout << m << std::endl;
		m.increment_grade();

		// //check constructor 
//		 Bureaucrat m("Linda", 155);
//		 std::cout << m << std::endl;
//		 m.increment_grade();

		// //check decrement
//		 Bureaucrat m("Elizabeth", 149);
//		 std::cout << m << std::endl;
//		 m.decrement_grade();
//		 std::cout << m << std::endl;
//		 m.decrement_grade();

		// //check increment
//		 Bureaucrat t("Michael", 1);
//		 std::cout << t << std::endl;
//		 Bureaucrat s(t);
//		 std::cout << s << std::endl;
//		 s.increment_grade();
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << GREY << START_END << WHITE << std::endl;
	return (0);
}

