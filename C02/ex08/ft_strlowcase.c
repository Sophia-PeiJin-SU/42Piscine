#include <stdbool.h>

char	*ft_strlowcase(char *str)
{
	int		i;
	char	tmp;

	i = 0;
	while (true)
	{
		tmp = str[i];
		if (str[i] == '\0')
		{
			break ;
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = tmp + 32;
		}
		i++;
	}
	return (str);
}
