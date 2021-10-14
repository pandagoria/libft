#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
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
