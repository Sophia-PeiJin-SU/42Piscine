#include <stdlib.h>

int	in_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		charset++;
	}
	return (0);
}

int	word_count(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!in_charset(str[i], charset))
		{
			i++;
			while (str[i] && !in_charset(str[i], charset))
				str++;
		}
		str++;
	}
	return (i);
}

void	ft_strcpy(char *dest, char *from, char *stop)
{
	while (from < stop)
		*(dest++) = *(from++);
	*dest = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		i;
	int		j;
	char	*from;

	j = 0;
	i = 0;
	result = (char **)malloc(sizeof(char *) * word_count(str, charset) + 1);
	while (str[i])
	{
		if (!in_charset(str[i], charset))
		{
			from = str;
			while (str[i] && !in_charset(*str, charset))
				str++;
			result[j] = (char *)malloc(str - from + 1);
			ft_strcpy(result[j++], from, str);
		}
		str++;
	}
	result[j] = 0;
	return (result);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	int		index;
	char	**split;

	split = ft_split("ImtmVrV6Ov8QrkGGUgl", "yenORYQ");
	index = 0;
	printf("tab start\n");
	while (split[index])
	{
		printf("tab[%d]: $%s$\n", index, split[index]);
		index++;
	}
	printf("tab end\n");
}*/
