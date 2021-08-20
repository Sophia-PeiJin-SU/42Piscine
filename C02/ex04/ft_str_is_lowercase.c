int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (1)
	{
		if (str[i] == '\0')
		{
			result = 1;
			break ;
		}
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			result = 0;
			break ;
		}
		i++;
	}
	return (result);
}
