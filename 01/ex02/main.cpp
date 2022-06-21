#include <iostream>
#include <string>

int main(void)
{
	std::string		sentence("\033[1mH\033[31mI \033[32mT\033[33mH\033[34mI\033[35mS\033[36m I\033[91mS \033[92mB\033[93mR\033[94mA\033[95mI\033[96mN\033[0m");
	std::string*	stringPTR = &sentence;
	std::string&	stringREF = sentence;

	std::cout << "\033[90m*****************************************************************************************\033[0m" << std::endl;
	std::cout << "here is the address of the sentence using an \033[4mampersand\033[0m\t" << &sentence  << std::endl;
	std::cout << "here is the address of the sentence using a \033[4mpointer\033[0m\t" << stringPTR  << std::endl;
	std::cout << "here is the address of the sentence using a \033[4mreference\033[0m\t" << &stringREF  << std::endl;

	std::cout << std::endl;

	std::cout << "here is the display of the sentence using a \033[4mdereferenced pointer\033[0m\t" << *stringPTR  << std::endl;
	std::cout << "here is the display of the sentence using a \033[4mreference\033[0m\t\t\t" << stringREF  << std::endl;
	std::cout << "\033[90m*****************************************************************************************\033[0m" << std::endl;

	return (0);
}
