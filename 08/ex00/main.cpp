#include "easyfind.hpp"

int main(void)
{
	std::cout << GREY << START_END << WHITE << std::endl;
	std::list<int>	lst1;

	lst1.push_back(2);
	lst1.push_back(7);
	lst1.push_back(22);
	lst1.push_back(11);
	lst1.push_back(34);

	int n = 7;
	std::list<int>::const_iterator itl = easyfind(lst1, n);
	if (*itl == n)
	{
		std::cout << GREEN << "Great! The desired value has been found" << std::endl;
		std::cout << "itl now points to the position of the found value in the doubly linked list." << WHITE << std::endl;
		std::cout << *itl << std::endl;
	}
	else
	{
		std::cout << YELLOW << "Well,\nthe desired value has not been found\n";
		std::cout << "itl now points to the position after the last member of the doubly linked list." << WHITE << std::endl;
		std::cout << *itl << std::endl;
	}
	std::cout << std::endl;

	std::vector<int>					v1;
	for (int count = 0; count < 5; ++count)
		v1.push_back(10 - count);

	int m = 11;
	std::vector<int>::const_iterator itv = easyfind(v1, m);
	if (*itv >= 6 && *itv <= 10)
	{
		std::cout << GREEN << "Great! The desired value has been found" << std::endl;
		std::cout << "itv now points to the position of the found value in the vector." << WHITE << std::endl;
		std::cout << *itv << std::endl;
	}
	else
	{
		std::cout << YELLOW << "Well,\nthe desired value has not been found\n";
		std::cout << "itv now points to the first position of the vector." << WHITE << std::endl;
		std::cout << *itv << std::endl;
	}

	std::cout << GREY << START_END << WHITE << std::endl;
	return (0);
}
