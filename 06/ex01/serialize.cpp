#include <string>
#include <iostream>

# define GREY "\033[2m"
# define WHITE "\033[0m"
# define START_END "********************************************************************************"

struct Data
{
	int				i;
	float			f;
	double			d;
	char			c;
	std::string		s;
};

uintptr_t serialize(Data* ptr)
{
	return(reinterpret_cast< uintptr_t >(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return(reinterpret_cast< Data* >(raw));
}

int main(void)
{
	std::cout << GREY << START_END << WHITE << std::endl;
	Data old;
	old.i = 5;
	old.f = -4.2f;
	old.d = 5.3;
	old.c = 's';
	old.s = "Hey, I am a little string here.";
	uintptr_t uptr = serialize(&old);
	uintptr_t uptr2 = uptr;
	Data *new_one = deserialize(uptr2);
	std::cout << new_one->i << std::endl;
	std::cout << new_one->f << std::endl;
	std::cout << new_one->d << std::endl;
	std::cout << new_one->c << std::endl;
	std::cout << new_one->s << std::endl;
	std::cout << GREY << START_END << WHITE << std::endl;
	return (0);
}
