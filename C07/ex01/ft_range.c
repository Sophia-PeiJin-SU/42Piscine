#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
int	*ft_range(int min, int max)
{
	int	length;
	int	i;
	int	*range;

	length = max - min;
	i = 0;
	if (min >= max)
		return (NULL);
	else
	{
		range = (int *)malloc(sizeof(int) * length);
		while (min < max)
			range[i++] = min++;
		return (range);
	}
}
/*
int	main(void)
{
	int	min = 3;
	int	max = 5;
	int	*result = ft_range(min, max);
	ft_putchar(result[0] + '0');
	ft_putchar(result[1] + '0');
	ft_putchar(result[2] + '0');
	ft_putchar(result[3] + '0');
	return (0);
}
*/
