#include "convert.hpp"

int convert_from_char(char *char_argument)
{
	std::cout << "i am a char" << std::endl;
	std::string num(char_argument);
	char convert_to_char = num[0];
	int convert_to_int = static_cast<int>(char_argument[0]);
	float convert_to_float = static_cast<float>(char_argument[0]);
	double convert_to_double = static_cast<double>(char_argument[0]);
	print_result(convert_to_char);
	print_result(convert_to_int);
	print_result_0(convert_to_float);
	print_result_0(convert_to_double);
	std::cout << GREY << START_END << WHITE << std::endl;
	return (0);
}

int convert_from_int(char *char_argument)
{
	std::cout << "i am an int" << std::endl;
	long long int convert_to_long_long_int = atoll(char_argument);
	int min = std::numeric_limits<int>::min();
	int max = std::numeric_limits<int>::max();
	if (convert_to_long_long_int > max || convert_to_long_long_int < min)
		std::cout << RED << "Wrong argument" << WHITE << std::endl;
	else
	{
		int converted_to_int = convert_to_long_long_int;
		if (converted_to_int >= 0 && converted_to_int <= 32)
			std::cout << "char: Non displayable" << std::endl;
		else if (converted_to_int > 32 && converted_to_int < 127)
		{
			char converted_to_char = static_cast<char>(converted_to_int);
			print_result(converted_to_char);
		}
		else
			std::cout << "char: impossible" << std::endl;
		float converted_to_float = static_cast<float>(converted_to_int);
		double converted_to_double = static_cast<double>(converted_to_int);
		print_result(converted_to_int);
		print_result_0(converted_to_float);
		print_result_0(converted_to_double);
	}
	std::cout << GREY << START_END << WHITE << std::endl;
	return (0);
}

void convert_from_float(char *char_argument)
{
	std::cout << "i am a float" << std::endl;
	std::string num(char_argument);
	float converted_to_float = stof(num);
	if (converted_to_float >= 0 && converted_to_float <= 32)
		std::cout << "char: Non displayable" << std::endl;
	else if (converted_to_float > 32 && converted_to_float < 127)
	{
		char converted_to_char = static_cast<char>(converted_to_float);
		print_result(converted_to_char);
	}
	else
		std::cout << "char: impossible" << std::endl;
	int min = std::numeric_limits<int>::min();
	int max = std::numeric_limits<int>::max();
	if (converted_to_float > max || converted_to_float < min)
		std::cout << "int: impossible" << std::endl;
	else
	{
		int converted_to_int = static_cast<int>(converted_to_float);
		print_result(converted_to_int);
	}
	double converted_to_double = static_cast<double>(converted_to_float);
	if (it_is_just_zero_after_a_point(char_argument) == 1)
	{
		print_result_0(converted_to_float);
		print_result_0(converted_to_double);
	}
	else
	{
		print_result(converted_to_float);
		print_result(converted_to_double);
	}
}

void convert_from_double(char *char_argument)
{
	std::cout << "i am a double" << std::endl;
	double converted_to_double = atof(char_argument);
	if (converted_to_double >= 0 && converted_to_double <= 32)
		std::cout << "char: Non displayable" << std::endl;
	else if (converted_to_double > 32 && converted_to_double < 127)
	{
		char converted_to_char = static_cast<char>(converted_to_double);
		print_result(converted_to_char);
	}
	else
		std::cout << "char: impossible" << std::endl;
	int min = std::numeric_limits<int>::min();
	int max = std::numeric_limits<int>::max();
	if (converted_to_double > max || converted_to_double < min)
		std::cout << "int: impossible" << std::endl;
	else
	{
		int converted_to_int = static_cast<int>(converted_to_double);
		print_result(converted_to_int);
	}
	float converted_to_float = static_cast<float>(converted_to_double);
	if (it_is_just_zero_after_a_point(char_argument) == 1)
	{
		print_result_0(converted_to_float);
		print_result_0(converted_to_double);
	}
	else
	{
		print_result(converted_to_float);
		print_result(converted_to_double);
	}
}

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << GREY << START_END << WHITE << std::endl;
		std::cout << YELLOW << "Usage:\n./scalar_conversion <argument>\n\n"
					 "Available arguments: int, float, double or char" << WHITE << std::endl;

	}
	if (argc == 2)
	{
		std::cout << GREY << START_END << WHITE << std::endl;
		std::string num(argv[1]);
		if (argv[1][1] == '\0' && ((argv[1][0] > 32 && argv[1][0] < 48) || (argv[1][0] > 57 && argv[1][0] < 127)))
			return (convert_from_char(argv[1]));
		if (!(num.compare("-inff")) || !(num.compare("+inff")) || !(num.compare("nanf")))
			return (print_nanf_inff(argv[1]));
		if (!(num.compare("-inf")) || !(num.compare("+inf")) || !(num.compare("nan")))
			return (print_nan_inf(argv[1]));
		int result = check_if_num(argv[1]);
		if (result == 0)
			return (convert_from_int(argv[1]));
		else if (result == 1) // it is double
		{
			convert_from_double(argv[1]);
			std::cout << GREY << START_END << WHITE << std::endl;
			return (0);
		}
		else if (result == 2) // it is float
		{
			convert_from_float(argv[1]);
			std::cout << GREY << START_END << WHITE << std::endl;
			return (0);
		}
		else if (result == -1)
			std::cout << RED << "Wrong argument" << WHITE << std::endl;
	}
	std::cout << GREY << START_END << WHITE << std::endl;
	return (0);
}
