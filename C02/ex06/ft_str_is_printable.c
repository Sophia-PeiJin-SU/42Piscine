int	ft_str_is_printable(char *str)
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
		if (!(str[i] >= 32 && str[i] <= 127))
		{
			result = 0;
			break ;
		}
		i++;
	}
	return (result);
}
