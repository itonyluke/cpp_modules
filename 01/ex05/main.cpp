#include "Karen.hpp"

int main()
{
	std::cout << "\033[90m******************************************************************************************************************************************************\033[0m" << std::endl;
	class Karen call_the_manager_i_am_gonna;
	call_the_manager_i_am_gonna.complain("DEBUG");
	call_the_manager_i_am_gonna.complain("INFO");
	call_the_manager_i_am_gonna.complain("WARNING");
	call_the_manager_i_am_gonna.complain("ERROR");
	call_the_manager_i_am_gonna.complain("FAIL");
	std::cout << "\033[90m******************************************************************************************************************************************************\033[0m" << std::endl;
	return (0);
}
