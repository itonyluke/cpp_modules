#include "Iter.hpp"

int main(void)
{
	std::cout << GREY << START_END << WHITE << std::endl;

	std::cout << GREY << "I just iterated the function print() over the different arrays" << WHITE << std::endl;

	std::cout << std::endl;
	std::cout << GREY << "Iter(int_array, 5, &print)" << WHITE << std::endl;
	int int_array[5] = { 0, 1, 2, 3, 4 };
	Iter(int_array, 5, &print);
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << GREY << "Iter(float_array, 5, &print)" << WHITE << std::endl;
	float float_array[5] = { 0.0f, 1.1f, 2.2f, 3.3f, 4.4f };
	Iter(float_array, 5, &print);
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << GREY << "Iter(double_array, 5, &print)" << WHITE << std::endl;
	double double_array[5] = { 0.00, 1.11, 2.22, 3.33, 4.44 };
	Iter(double_array, 5, &print);
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << GREY << "Iter(bool_array, 2, &print)" << WHITE << std::endl;
	bool bool_array[2] = { false, true };
	Iter(bool_array, 2, &print);
	std::cout << std::endl;

	std::cout << std::endl;
	std::string string_array[5] = { "One", "Two", "Three", "Four", "Five" };
	std::cout << GREY << "Iter(string_array_array, 5, &print)" << WHITE << std::endl;
	Iter(string_array, 5, &print); std::cout << std::endl;
	std::cout << std::endl;
	std::cout << GREY << "Iter(string_array_array, 2, &print)" << WHITE << std::endl;
	Iter(string_array, 2, &print); std::cout << std::endl;
	std::cout << std::endl;
	std::cout << GREY << "Iter(string_array_array, 0, &print)" << WHITE << std::endl;
	Iter(string_array, 0, &print); std::cout << std::endl;

	std::cout << GREY << START_END << WHITE << std::endl;
 	return (0);
 }
