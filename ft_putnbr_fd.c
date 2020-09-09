

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb1;
	char	c;

	nb1 = n;
	c = '-';
	if (n < 0)
	{
		nb1 = -nb1;
		ft_putchar_fd('-', fd);
	}
	if (nb1 >= 10)
		ft_putnbr_fd(nb1 / 10, fd);
	ft_putchar_fd(nb1 % 10 + '0', fd);
}
