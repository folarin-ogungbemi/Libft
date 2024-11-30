#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}
/*
int	main(void)
{
	int	fd;
	char	s[10] = "andre";

	fd = open("str.txt", O_WRONLY | O_CREAT | O_TRUNC, 0466);
	if (fd < 0)
		return (1);
	ft_putstr_fd(s, fd);
	close(fd);
	return (0);
}
*/
