#include <iostream>
#include <string>
#include <fstream>


static int close_streams(std::ifstream & fin, std::ofstream & fout)
{
	fin.close();
	fout.close();
	return (0);
}

static int error(std::string & error)
{
	std::cout << error << std::endl;
	std::cout << "\033[90m*********************************************************************************\033[0m" << std::endl;
	return (1);
}

static unsigned int output_prompt()
{
	std::cout << "\033[33m1. Open a_quote_from_the_office file\n"
						"2. Read the contents\n"
						"3. Smile:)\n"
						"4. Choose a word or a sentence that you want to replace\n"
						"5. run ./replace the_name_of_the_file string_for_replacement new_string\033[0m" << std::endl;
	std::cout << "\033[90m*********************************************************************************\033[0m" << std::endl;
	return (1);
}

int main(int argc, char **argv)
{
	std::cout << "\033[90m*********************************************************************************\033[0m" << std::endl;
	if (argc == 4)
	{
		std::string s1(argv[2]);
		std::string s2(argv[3]);

		if (argv[2][0] == '\0' || argv[3][0] == '\0')
		{
			std::string empty_str = "\033[31mCheck your strings, they must not be empty!\033[0m";
			return (error(empty_str));
		}
		else
		{
			std::ifstream fin(argv[1]);
			if(!fin)
			{
				std::string read_err_str = "\033[31mOh, it is impossible to read from this file.\033[0m";
				return (error(read_err_str));
			}

			//create_a_file_and_name_it
			std::string new_name_of_the_file(argv[1]);
			for (unsigned int i = 0; new_name_of_the_file[i]; i++)
				new_name_of_the_file[i] = toupper(new_name_of_the_file[i]);
			new_name_of_the_file += ".replace";

			std::ofstream fout(new_name_of_the_file);
			if(!fout)
			{
				std::string fout_err = "\033[31mOh, it is impossible to create a new file.\033[0m";
				return (error(fout_err));
			}
			//******************************************************************

			std::string temporary_string;
			unsigned long len = s1.length();
			while(std::getline(fin, temporary_string) != nullptr)
			{
				if (s1.compare(s2) != 0)
				{
					std::size_t found = temporary_string.find(s1);
					while (found != std::string::npos)
					{
						temporary_string.erase(found, len);
						temporary_string.insert(found, s2);
						found = temporary_string.find(s1);
					}
				}
				fout << temporary_string;
				if (fin.eof())
				{
					close_streams(fin, fout);
					return (0);
				}
				fout << std::endl;
			}
			close_streams(fin, fout);
		}
	}
	else
		output_prompt();
	return (0);
}
