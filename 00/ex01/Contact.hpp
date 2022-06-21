#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
private:
	int 					index;
	int 					counter;
	static std::string		field_name[5];
	std::string 			info[5];
	enum fields
	{
							first_name = 0,
							last_name,
							nickname,
							phone_number,
							darkest_secret
	};
public:
	Contact();
	~Contact();

	bool					set_info(int index, int counter);
	void 					display_info(void);
	void 					display_index(void);
};

#endif
