#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	j = argc - 1;
	while (--argc)
	{
		while (argv[j][i])
			ft_putchar(argv[j][i++]);
		i = 0;
		j = argc - 1;
		ft_putchar('\n');
	}
	return (0);
}
