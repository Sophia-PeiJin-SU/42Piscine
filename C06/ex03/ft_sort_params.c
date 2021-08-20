#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *a, char *b)
{
	while (*a && *a == *b)
	{
		a++;
		b++;
	}
	return (*a - *b);
}

void	ft_sort_strings(int num, char **s)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (i < num)
	{
		j = i;
		while (j > 0 && ft_strcmp(s[j - 1], s[j]) > 0)
		{
			tmp = s[j - 1];
			s[j - 1] = s[j];
			s[j] = tmp;
			j--;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (--argc)
	{
		ft_sort_strings(argc, argv + 1);
		while (argv[j][i])
			ft_putchar(argv[j][i++]);
		i = 0;
		j++;
		ft_putchar('\n');
	}
	return (0);
}
