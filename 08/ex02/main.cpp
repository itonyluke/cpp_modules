//#include "mutantstack.hpp"
//
//
//int main()
//{
//	std::cout << GREY << START_END << WHITE << std::endl;
//	MutantStack<int> mstack;
//
//	int n;
//	n = 2;
//	std::cout << "Pushing: " << n << std::endl;
//	mstack.push(n);
//	std::cout << "mstack.top() " << BWHITE <<  mstack.top() << WHITE <<std::endl;
//	std::cout << "mstack.size() ";
//	std::cout << mstack.size() << std::endl;
//	std::cout << GREY << SPLIT << WHITE << std::endl;
//
//	int m;
//	m = 19;
//	std::cout << "Pushing: " << m << std::endl;
//	mstack.push(m);
//	std::cout << "mstack.top() " << BWHITE <<  mstack.top() << WHITE <<std::endl;
//	std::cout << "mstack.size() ";
//	std::cout << mstack.size() << std::endl;
//	std::cout << GREY << SPLIT << WHITE << std::endl;
//
//	std::cout << "mstack.pop() " << std::endl;
//	mstack.pop();
//	std::cout << "mstack.top() " << BWHITE <<  mstack.top() << WHITE <<std::endl;
//	std::cout << "mstack.size() ";
//	std::cout << mstack.size() << std::endl;
//	std::cout << GREY << SPLIT << WHITE << std::endl;
//
//	std::cout << "Pushing: ";
//	mstack.push(3);
//	std::cout << mstack.top() << std::endl;
//	mstack.push(5);
//	std::cout << "Pushing: ";
//	std::cout << mstack.top() << std::endl;
//	mstack.push(737);
//	std::cout << "Pushing: ";
//	std::cout << mstack.top() << std::endl;
//	mstack.push(1);
//	std::cout << "Pushing: ";
//	std::cout << mstack.top() << std::endl;
//	std::cout << "size: ";
//	std::cout << mstack.size() << std::endl;
//	std::cout << GREY << SPLIT << WHITE << std::endl;
//
//	std::cout << "Iterating from the begining: \n";
//	{
//		MutantStack<int>::iterator it = mstack.begin();
//		MutantStack<int>::iterator ite = mstack.end();
////		++it;
////		--it;
//		std::cout << GREY << "***MUTANT_STACK_BOTTOM***" << WHITE <<std::endl;
//		while (it != ite)
//		{
//			std::cout << *it << std::endl;
//			++it;
//		}
//		std::cout << GREY << "***MUTANT_STACK_TOP***" << WHITE <<std::endl;
//		std::cout << "size: ";
//		std::cout << mstack.size() << std::endl;
//		std::cout << GREY << SPLIT << WHITE <<std::endl;
//	}
//	mstack.push(8);
//	std::cout << "Pushing: ";
//	std::cout << mstack.top() << std::endl;
//	mstack.push(9);
//	std::cout << "Pushing: ";
//	std::cout << mstack.top() << std::endl;
//	mstack.push(10);
//	std::cout << "Pushing: ";
//	std::cout << mstack.top() << std::endl;
//	std::cout << "size: ";
//	std::cout << mstack.size() << std::endl;
//	std::cout << GREY << SPLIT << WHITE <<std::endl;
//	std::cout << "Iterating from the end: \n";
//	{
//		MutantStack<int>::const_iterator it = mstack.begin();
//		MutantStack<int>::const_iterator ite = mstack.end();
////		++it;
//		--ite;
//		std::cout << GREY << "***MUTANT_STACK_TOP***" << WHITE <<std::endl;
//		while (ite != it)
//		{
//			std::cout << *ite << std::endl;
//			--ite;
//		}
//		std::cout << *ite << std::endl;
//		std::cout << GREY << "***MUTANT_STACK_BOTTOM***" << WHITE <<std::endl;
//		std::cout << "size: ";
//		std::cout << mstack.size() << std::endl;
//	}
//	std::cout << GREY << START_END << WHITE << std::endl;
//	return (0);
//}

#include "mutantstack.hpp"


int main()
{
	std::cout << GREY << START_END << WHITE << std::endl;
	std::list<int> mlist;
//	MutantStack<int> mstack;

	int n;
	n = 2;
	std::cout << "Pushing: " << n << std::endl;
	mlist.push_front(n);
//	mstack.push(n);
	std::cout << "mlist.top() " << BWHITE <<  mlist.front() << WHITE <<std::endl;
//	std::cout << "mstack.top() " << BWHITE <<  mstack.top() << WHITE <<std::endl;




//begin from here
//	std::cout << "mstack.size() ";
//	std::cout << mstack.size() << std::endl;
//	std::cout << GREY << SPLIT << WHITE << std::endl;
//
//	int m;
//	m = 19;
//	std::cout << "Pushing: " << m << std::endl;
//	mstack.push(m);
//	std::cout << "mstack.top() " << BWHITE <<  mstack.top() << WHITE <<std::endl;
//	std::cout << "mstack.size() ";
//	std::cout << mstack.size() << std::endl;
//	std::cout << GREY << SPLIT << WHITE << std::endl;
//
//	std::cout << "mstack.pop() " << std::endl;
//	mstack.pop();
//	std::cout << "mstack.top() " << BWHITE <<  mstack.top() << WHITE <<std::endl;
//	std::cout << "mstack.size() ";
//	std::cout << mstack.size() << std::endl;
//	std::cout << GREY << SPLIT << WHITE << std::endl;
//
//	std::cout << "Pushing: ";
//	mstack.push(3);
//	std::cout << mstack.top() << std::endl;
//	mstack.push(5);
//	std::cout << "Pushing: ";
//	std::cout << mstack.top() << std::endl;
//	mstack.push(737);
//	std::cout << "Pushing: ";
//	std::cout << mstack.top() << std::endl;
//	mstack.push(1);
//	std::cout << "Pushing: ";
//	std::cout << mstack.top() << std::endl;
//	std::cout << "size: ";
//	std::cout << mstack.size() << std::endl;
//	std::cout << GREY << SPLIT << WHITE << std::endl;
//
//	std::cout << "Iterating from the begining: \n";
//	{
//		MutantStack<int>::iterator it = mstack.begin();
//		MutantStack<int>::iterator ite = mstack.end();
////		++it;
////		--it;
//		std::cout << GREY << "***MUTANT_STACK_BOTTOM***" << WHITE <<std::endl;
//		while (it != ite)
//		{
//			std::cout << *it << std::endl;
//			++it;
//		}
//		std::cout << GREY << "***MUTANT_STACK_TOP***" << WHITE <<std::endl;
//		std::cout << "size: ";
//		std::cout << mstack.size() << std::endl;
//		std::cout << GREY << SPLIT << WHITE <<std::endl;
//	}
//	mstack.push(8);
//	std::cout << "Pushing: ";
//	std::cout << mstack.top() << std::endl;
//	mstack.push(9);
//	std::cout << "Pushing: ";
//	std::cout << mstack.top() << std::endl;
//	mstack.push(10);
//	std::cout << "Pushing: ";
//	std::cout << mstack.top() << std::endl;
//	std::cout << "size: ";
//	std::cout << mstack.size() << std::endl;
//	std::cout << GREY << SPLIT << WHITE <<std::endl;
//	std::cout << "Iterating from the end: \n";
//	{
//		MutantStack<int>::const_iterator it = mstack.begin();
//		MutantStack<int>::const_iterator ite = mstack.end();
////		++it;
//		--ite;
//		std::cout << GREY << "***MUTANT_STACK_TOP***" << WHITE <<std::endl;
//		while (ite != it)
//		{
//			std::cout << *ite << std::endl;
//			--ite;
//		}
//		std::cout << *ite << std::endl;
//		std::cout << GREY << "***MUTANT_STACK_BOTTOM***" << WHITE <<std::endl;
//		std::cout << "size: ";
//		std::cout << mstack.size() << std::endl;
//	}
//	std::cout << GREY << START_END << WHITE << std::endl;
//	return (0);
}
