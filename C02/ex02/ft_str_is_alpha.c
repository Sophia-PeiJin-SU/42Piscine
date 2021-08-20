#include <stdbool.h>

int	ft_str_is_alpha(char *str)
{
	int		i;
	bool	result;

	i = 0;
	result = true;
	while (result)
	{
		if (str[i] == '\0')
		{
			result = true;
			break ;
		}
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
		{
			result = false;
			break ;
		}
		i++;
	}
	return (result);
}
