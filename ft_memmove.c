#include "libft.h"

void	*ft_memmove(void *dst, const void *src, t_size len)
{
	char	*str;
	char	*str1;

	str = (char *) dst;
	str1 = (char *) src;
	if (str == 0 && str1 == 0)
		return (0);
	if (str > str1)
		ft_memcpy(dst, src, len);
	else
		while (len > 0)
		{
			*str++ = *str1++;
			len--;
		}
	return (dst);
}
