#include "Karen.hpp"

int main(int argc, char **argv)
{
	class Karen i_am_tired_of_Karen_s_shit_give_me_a;
	std::cout << "\033[90m******************************************************************************************************************************************************\033[0m" << std::endl;
	if (argc == 2)
	{
		std::string level(argv[1]);
		i_am_tired_of_Karen_s_shit_give_me_a.filter(level);
	}
	else
		std::cout << "\033[31mUsage:\033[0m\n./karenFilter <argument>\n\navailable arguments: DEBUG, INFO, WARNING or ERROR" << std::endl;
	std::cout << "\033[90m******************************************************************************************************************************************************\033[0m" << std::endl;
	return (0);
}
