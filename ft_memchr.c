#include "libft.h"

void	*ft_memchr(const void *s, int c, t_size n)
{
	t_size			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *) s;
	while (i < n)
	{
		if ((unsigned char) str[i] == (unsigned char) c)
			return (&str[i]);
		i++;
	}
	return (0);
}
