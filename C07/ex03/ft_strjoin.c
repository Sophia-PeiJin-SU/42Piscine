#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	while (*src)
		*(dest++) = *(src++);
	return (dest);
}

char	*invalid_size(int size)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * 1);
	result[size] = 0;
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	char	*tmp;
	int		strs_len;
	int		i;

	if (!size)
	{
		result = invalid_size(size);
		return (result);
	}
	strs_len = 0;
	i = 0;
	while (i < size)
		strs_len += ft_strlen(strs[i++]);
	result = (char *)malloc((strs_len + size - 1) * ft_strlen(sep) + 1);
	tmp = ft_strcat(result, strs[0]);
	i = 1;
	while (i < size)
	{
		tmp = ft_strcat(tmp, sep);
		tmp = ft_strcat(tmp, strs[i++]);
	}
	*tmp = 0;
	return (result);
}
/*
int	main(void)
{
	int		index;
	char	**strs;
	char	*separator;
	char	*result;

	strs = (char **)malloc(4 * sizeof(strs));
	strs[0] = "lol";
	strs[1] = "1234";
	strs[2] = "poiuic";
	strs[3] = "1234";
	separator = "+";
	index = 0;
	while (index < 4)
	{
		result = ft_strjoin(index, strs, separator);
		printf("result with size = %d : $%s$\n", index, result);
		free(result);
		index++;
	}
}
*/
