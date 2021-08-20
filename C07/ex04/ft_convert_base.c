#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

bool	is_space(char c);
int		ft_strlen(char *str);
int		ft_result_length(unsigned int num, int strlength, bool negative);
int		finalSign(int result, int sign);
bool	checkNegative(int sign);

int	solve_base(char *base, char match)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == match)
			return (i);
		i++;
	}
	return (-1);
}

bool	valid_base(char *str)
{
	char	*base;
	int		i;
	int		j;

	base = str;
	if (str == 0 || ft_strlen(str) <= 1)
		return (false);
	while (*base)
	{
		if (is_space(*base) || *base == '+' || *base == '-')
			return (false);
		base++;
	}
	i = 0;
	while (i < base - str)
	{
		j = i + 1;
		while (j < base - str)
			if (str[i] == str[j++])
				return (false);
		i++;
	}
	return (true);
}

char	*ft_buffer_base(char *base_to, unsigned int num, bool negative)
{
	int		i;
	int		strlength;
	int		resultlength;
	char	*str;

	strlength = ft_strlen(base_to);
	resultlength = ft_result_length(num, strlength, negative);
	str = (char *)malloc((resultlength + 1) * sizeof(char));
	if (str == 0)
		return (0);
	if (negative)
	{
		str[0] = '-';
		i = 1;
	}
	else
		i = 0;
	while (i < resultlength)
	{
		str[resultlength - (!negative) - i++] = base_to[num % strlength];
		num /= strlength;
	}
	str[resultlength] = '\0';
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				strlength;
	int				sign;
	int				solved;
	unsigned int	result;

	if (!valid_base(base_from) || !valid_base(base_to))
		return (NULL);
	strlength = ft_strlen(base_from);
	result = 0;
	sign = 1;
	while (is_space(*nbr))
		nbr++;
	while (*nbr == '+' || *nbr == '-')
		if (*(nbr++) == '-')
			sign *= -1;
	solved = solve_base(base_from, *nbr);
	while (solved != -1)
	{
		result *= strlength;
		result += solved;
		nbr++;
		solved = solve_base(base_from, *nbr);
	}
	sign = finalSign(result, sign);
	return (ft_buffer_base(base_to, result, checkNegative(sign)));
}
