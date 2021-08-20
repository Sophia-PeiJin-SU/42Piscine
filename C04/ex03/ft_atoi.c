/*
#include <stdio.h>
*/
int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == '\t'
		|| *str == '\n'
		|| *str == '\v'
		|| *str == '\f'
		|| *str == '\r'
		|| *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
		if (*(str++) == '-')
			sign = -sign;
	while (*str >= '0' && *str <= '9')
	{
		result *= 10;
		result += (sign * (*(str++) - '0'));
	}
	return (result);
}
/*
int	main(void)
{
	char	*str;

	str = "---+--+1234ab567";
	printf("%d\n", ft_atoi(str));
}
*/
