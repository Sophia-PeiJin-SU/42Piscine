/*#include <stdio.h>
*/
int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power < 0)
		return (0);
	else
	{
		while (power--)
			i = i * nb;
	}
	return (i);
}
/*
int	main(void)
{
	int	nb;
	int	power;

	nb = 3;
	power = 4;
	printf("%d\n", ft_iterative_power(nb, power));
}
*/
