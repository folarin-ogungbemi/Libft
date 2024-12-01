#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (!n || fd < 0)
		return ;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n >= 0)
	{
		if (n > 9)
			ft_putnbr_fd((n / 10), fd);
		n = (n % 10) + 48;
		write(1, &n, 1);
	}
}
/*
int	main(void)
{
	int	nbr;
	int	fd;
	
	nbr = 12;
	fd = open("int.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd < 0)
		return (1);
	ft_putnbr_fd(nbr, fd);
	close(fd);
	return (0);
}*/
