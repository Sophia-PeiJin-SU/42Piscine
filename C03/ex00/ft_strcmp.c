/*#include <stdio.h>
*/
int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}
/*
int	main(void)
{
	int	result1;
	int	result2;

	result1 = ft_strcmp("Hello", "Hello");
	result2 = ft_strcmp("Hello", "Helloo");
	printf("%d\n", result1);
	printf("%d\n", result2);
	return (0);
}
*/
