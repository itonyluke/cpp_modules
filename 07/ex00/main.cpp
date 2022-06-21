#include "Whatever.hpp"

int main(void)
{
	std::cout << GREY << START_END << WHITE << std::endl;
	std::cout << GREY <<"below you can see the output\n"
				 "produced by the code provided in the subject." << WHITE << std::endl;

	 int a = 2;
	 int b = 3;
	 ::swap( a, b );
	 std::cout << "a = " << a << ", b = " << b << std::endl;
	 std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	 std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	 std::string c = "chaine1";
	 std::string d = "chaine2";
	 ::swap(c, d);
	 std::cout << "c = " << c << ", d = " << d << std::endl;
	 std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	 std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << std::endl;

	std::cout << GREY <<"However, I think that the code provided in the subject\n"
						"generates the output that is not clear enough, so I updated the code a bit." << WHITE << std::endl;
	std::cout << "a = " << a << "\nb = " << b << std::endl;
	std::cout << "swap (a, b)" << std::endl;
	::swap( a, b );
	std::cout << "a = " << a << "\nb = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::cout << std::endl;

	::swap(c, d);
	std::cout << "c = " << c << "\nd = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << GREY << START_END << WHITE << std::endl;
	return (0);
}
