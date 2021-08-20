#include <unistd.h>

void	ft_print_comb(void)
{
	char	nbr1;
	char	nbr2;
	char	nbr3;

	nbr1 = '0' - 1;
	while (nbr1++ < '9')
	{
		nbr2 = nbr1;
		while (nbr2++ < '9')
		{
			nbr3 = nbr2;
			while (nbr3++ < '9')
			{
				if (nbr1 != '0' || nbr2 != '1' || nbr3 != '2')
				{
					write(1, ",", 1);
					write(1, " ", 1);
				}
				write(1, &nbr1, 1);
				write(1, &nbr2, 1);
				write(1, &nbr3, 1);
			}
		}
	}
}
