#include "convert.hpp"

int check_if_num(char *s)
{
	int i = 0;
	if (s[i] == '\0')
		return (-1);
	if (s[i] == '-')
		i++;
	while (s[i] != '\0')
	{
		if (s[i] > 47 && s[i] < 58)
			i++;
		else
			break;
	}
	if (s[i] == '\0')
		return (0); // it is int
	if (s[i] == '.')
	{
		i++;
		while (s[i] != '\0')
		{
			if (s[i] > 47 && s[i] < 58)
				i++;
			else
				break;
		}
		if (s[i] == '\0')
			return (1); //double;
		if (s[i] == 'f' && s[i + 1] == '\0')
			return (2); //float
	}
	return (-1);
}

int it_is_just_zero_after_a_point(char *s)
{
	int i = 0;
	while (s[i] != '.')
		i++;
	if (s[i] == '.')
		i++;
	while (s[i] == '0')
		i++;
	if (s[i] == 'f')
		i++;
	if (s[i] == '\0')
		return (1); // it is just zero after point in double or float
	return (0);
}
