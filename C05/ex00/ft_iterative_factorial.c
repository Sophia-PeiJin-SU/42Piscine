/*#include <unistd.h>
#include <stdio.h>
*/
int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	i;

	factorial = 1;
	i = 0;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	while (i++ < nb)
		factorial *= i;
	return (factorial);
}
/*
int	main(void)
{
	int	nb;

	nb = 4;
	printf("%d\n", ft_iterative_factorial(nb));
}
*/
