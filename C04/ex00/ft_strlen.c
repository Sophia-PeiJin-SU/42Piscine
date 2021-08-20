/*
#include <stdio.h>
*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	int		i;
	char	*str;

	str = "Hello";
	i = ft_strlen(str);
	printf("%d", i);
}
*/
