#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, t_size n)
{
	char	*str;
	char	*str1;

	str = (char *) dst;
	str1 = (char *) src;
	if (!str && !str1)
		return (0);
	while (n--)
	{
		*str++ = *str1++;
	}
	return (dst);
}
