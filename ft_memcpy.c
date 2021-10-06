#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, t_size n)
{
	unsigned char	*str;
	unsigned char	*str1;

	str = (unsigned char *) dst;
	str1 = (unsigned char *) src;
	if (ft_strlen(dst) < n)
		return (0);
	while (n--)
	{
		str[n] = str1[n];
	}
	return (dst);
}
