/*#include <stdio.h>
*/
char	*ft_strcat(char *dest, char*src)
{
	char	*tmp;

	tmp = dest;
	while (*tmp != '\0')
		tmp++;
	while (*src != '\0')
	{
		*tmp = *src;
		tmp++;
		src++;
	}
	*tmp = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	*src;
	char	dest[6] = "Hello";

	src = " World";
	printf("%s\n", ft_strcat(dest, src));
}
*/
