#include "libft.h"

void	*ft_memset(void *b, int c, t_size len)
{
	t_size			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *) b;
	while (i < len)
	{
		str[i] = (unsigned char) c;
		i++;
	}
	return (b);
}
