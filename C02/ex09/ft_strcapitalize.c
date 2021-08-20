void	ft_cap(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
	else if (*c >= 'A' && *c <= 'Z')
		*c = *c;
}

void	ft_lower(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		*c = *c + 32;
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i++])
		ft_lower(&str[i]);
	i = 0;
	while (str[i])
	{
		if (i == 0)
			ft_cap(&str[i]);
		if (str[i] == ' ')
			ft_cap(&str[i + 1]);
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
			ft_cap(&str[i + 1]);
		if (str[i] >= '0' && str[i] <= '9')
			ft_lower(&str[i + 1]);
		i++;
	}
	return (str);
}
