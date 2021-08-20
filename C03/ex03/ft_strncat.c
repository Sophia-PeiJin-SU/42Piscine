#include <stdio.h>

char	*ft_strncat(char *dest, char*src, unsigned int nb)
{
	char	*tmp;

	tmp = dest;
	while (*tmp != '\0')
		tmp++;
	while (*src != '\0' && nb > 0)
	{
		*tmp = *src;
		tmp++;
		src++;
		nb--;
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
	printf("%s\n", ft_strncat(dest, src, 3));
}
*/
