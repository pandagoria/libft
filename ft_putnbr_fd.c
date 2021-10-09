#include "libft.h"

int	length(int n)
{
	int	i;
	int	temp;

	i = 0;
	temp = 0;
	while (n != 0)
	{
		temp = temp / 10;
		i++;
	}
	return (i);	
}

void	ft_putnbr_fd(int n, int fd)
{
	int	i;

	i = length(n);
	if (n < 0)
		i = i + 1;
	write(fd, &n, i * sizeof(int));
}
