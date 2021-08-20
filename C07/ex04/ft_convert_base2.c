#include <stdbool.h>

bool	checkNegative(int sign)
{
	if (sign > 0)
		return (false);
	else
		return (true);
}

int	finalSign(int result, int sign)
{
	if (result == 0)
		sign = 1;
	else
		sign = sign * 1;
	return (sign);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

bool	is_space(char c)
{
	bool	is_space;

	is_space = false;
	if (c == '\t'
		|| c == '\n'
		|| c == '\v'
		|| c == '\f'
		|| c == '\r'
		|| c == ' ')
		is_space = true;
	return (is_space);
}

int	ft_result_length(unsigned int num, int strlength, bool negative)
{
	unsigned int	length;

	length = 1;
	if (length == negative)
		length = 1;
	else
		length = 0;
	while (true)
	{
		length++;
		if (num / strlength == 0)
			break ;
		num /= strlength;
	}
	return (length);
}
