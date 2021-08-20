#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	length;
	int	i;
	int	*buffer;

	i = 0;
	if (min >= max)
		return (0);
	length = max - min;
	*range = (int *)malloc(sizeof(int) * length);
	if (*range == NULL)
		return (-1);
	buffer = *range;
	while (min < max)
		buffer[i++] = min++;
	return (length);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*range;
	int	bound;

	min = 5;
	max = 10;
	bound = ft_ultimate_range(&range, min, max);
	printf("min = %d\nmax = %d\nbound = %d\n", min, max, bound);
}
*/
