#ifndef CONVERT_HPP
# define CONVERT_HPP

# define GREY "\033[2m"
# define WHITE "\033[0m"
# define YELLOW "\033[33m"
# define RED "\033[31m"
# define START_END "*****************************************************************************************************************************"

# include <iostream>
# include <string>
# include <limits>

void print_result(char converted_to_char);
void print_result(int converted_to_int);
void print_result(float converted_to_float);
void print_result(double converted_to_double);
void print_result_0(float converted_to_float);
void print_result_0(double converted_to_double);
void print_nan_nanf_inf_inff(std::string numf, std::string num);
int print_nan_inf(char *str);
int print_nanf_inff(char *str);
int check_if_num(char *s);
int it_is_just_zero_after_a_point(char *s);

#endif
