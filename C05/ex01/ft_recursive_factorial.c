/*#include <stdio.h>
*/
int	ft_recursive_factorial(int nb)
{
	int	j;

	j = 0;
	if (nb >= 1)
		return (nb * ft_recursive_factorial(nb - 1));
	if (nb == 0)
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	nb;

	nb = 5;
	printf("%d\n", ft_recursive_factorial(nb));
}
*/
