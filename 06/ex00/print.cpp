#include "convert.hpp"

void print_result(char converted_to_char)
{
	std::cout << "char : " << converted_to_char << std::endl;
}

void print_result(int converted_to_int)
{
	std::cout << "int : " << converted_to_int << std::endl;
}

void print_result(float converted_to_float)
{
	std::cout << "float : " << converted_to_float << "f" << std::endl;
}

void print_result(double converted_to_double)
{
	std::cout << "double : " << converted_to_double << std::endl;
}

void print_result_0(float converted_to_float)
{
	std::cout << "float : " << converted_to_float << ".0f" << std::endl;
}

void print_result_0(double converted_to_double)
{
	std::cout << "double : " << converted_to_double << ".0" << std::endl;
}

void print_nan_nanf_inf_inff(std::string numf, std::string num)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << numf << std::endl;
	std::cout << "double: " << num << std::endl;
}

int print_nan_inf(char *str)
{
	std::string num(str);
	std::string numf = num + "f";
	print_nan_nanf_inf_inff(numf, num);
	return (0);
}

int print_nanf_inff(char *str)
{
	std::string numf(str);
	std::string num = numf;
	num.pop_back();
	print_nan_nanf_inf_inff(numf, num);
	return (0);
}

