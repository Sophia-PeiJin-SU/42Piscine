/*#include <unistd.h>
#include <stdio.h>
*/
char	*ft_strstr(char *str, char *to_find)
{
	char	*str_tmp;
	char	*to_find_tmp;

	if (*to_find == '\0')
		return (str);
	str_tmp = str;
	to_find_tmp = to_find;
	while (*str != '\0')
	{
		if (*to_find_tmp == '\0')
			return ((char *)(str_tmp) - (to_find_tmp - to_find));
		if (*str_tmp == *to_find_tmp)
			to_find_tmp++;
		else
			to_find_tmp = to_find;
		if (*str_tmp == '\0')
			break ;
		str_tmp++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*str1 = "hello world sophia";
	char	*str2 = "world";
	char	*result;

	result = ft_strstr(str1, str2);
	printf("%s", result);
	return (0);
}
*/
