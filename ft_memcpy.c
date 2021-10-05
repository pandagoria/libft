#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, t_size n)
{
	t_size	i;
	unsigned char	*str;
	unsigned char	*str1;

	i = 0;
	str = (unsigned char *) dst;
	str1 = (unsigned char *) src;
	if (ft_strlen(dst) < n)
		return (0);
	while (i < n)
	{
		str[i] = str1[i];
		i++;
	}
	return (dst);
}
