#include "libft.h"

void	*ft_memmove(void *dst, const void *src, t_size len)
{
	t_size			i;
	unsigned char	*str;
	unsigned char	*str1;

	i = 0;
	str = (unsigned char *) dst;
	str1 = (unsigned char *) src;
	if (str > str1)
		ft_memcpy(dst, src, len);
	else
		while (i++ < len)
			str[i] = str[i];
	return (str);
}
