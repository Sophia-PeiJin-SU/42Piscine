/*#include <stdio.h>
*/
int	ft_sqrt(int nb)
{
	int	sqr;
	int	i;

	i = 1;
	sqr = 1;
	if (nb == 0 || nb == 1)
		return (nb);
	while (sqr <= nb && i < 46341)
	{
		i++;
		sqr = i * i;
		if (sqr == nb)
			return (i);
	}
	return (0);
}
/*
int	main(void)
{
	int	nb1;
	int	nb2;
	int	nb3;
	int	nb4;

	nb1 = -4;
	nb2 = 0;
	nb3 = 9;
	nb4 = 7;
	printf("%d\n", ft_sqrt(nb1));
	printf("%d\n", ft_sqrt(nb2));
	printf("%d\n", ft_sqrt(nb3));
	printf("%d\n", ft_sqrt(nb4));
}
*/
