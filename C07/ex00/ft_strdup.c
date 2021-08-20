#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*result;
	int		i;

	i = 0;
	result = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	while (src[i])
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
int	main(void)
{
	char	*str;
	char	*result;

	str = "1aP5a";
	result = ft_strdup(str);
	printf("%s\n", result);
	return (0);
}
*/
