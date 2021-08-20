/*#include <stdio.h>
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 != '\0' && *s2 != '\0' && n > 0)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return (*s1 - *s2);
}
/*
int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "hello";
	str2 = "hello";
	
	printf("%d\n", ft_strncmp(str1, str2, 3));
	return (0);
}
*/
