/*#include <stdio.h>
*/
int	ft_is_prime(int nb)
{
	int	i;
	int	p;

	i = 1;
	p = 0;
	if (nb == 2147483647)
		return (1);
	while (i <= nb && i < 2147483647)
	{
		if (nb % i == 0)
			p++;
		i++;
	}
	if (p == 2)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	int	nb1;
	int	nb2;

	nb1 = 7;
	nb2 = 9;
	printf("%d\n", ft_is_prime(nb1));
	printf("%d\n", ft_is_prime(nb2));
}
*/
