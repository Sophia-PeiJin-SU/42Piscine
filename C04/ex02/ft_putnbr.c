#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int nb)
{
	if (nb < 10)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			nb = -nb;
			ft_putchar('-');
		}
		ft_print_number(nb);
	}
}
/*
int	main(void)
{
	int	nb1;
	int	nb2;
	int	nb3;

	nb1 = 0;
	nb2 = 2;
	nb3 = -53;
	ft_putnbr(nb1);
	ft_putnbr(nb2);
	ft_putnbr(nb3);
}
*/
