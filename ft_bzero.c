#include "libft.h"

void	ft_bzero(void *s, t_size n)
{
	t_size			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *) s;
	if (!n)
		return ;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
