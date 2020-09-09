

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	unsigned char car;

	car = (unsigned char)c;
	write(fd, &car, sizeof(car));
}
