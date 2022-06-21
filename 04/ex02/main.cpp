#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(void)
{
//	Animal I_am_not_allowed_to_exist;
	const Animal *j = new Dog();
	delete j;
}
