#include "libft.h"

void	*ft_memmove(void *dst, const void *src, t_size len)
{
	char	*str;
	char	*str1;
	t_size	i;

	str = (char *) dst;
	str1 = (char *) src;
	i = 0;
	if (str == 0 && str1 == 0)
		return (0);
	if (str < str1)
		ft_memcpy(dst, src, len);
	while (len > 0)
	{
		str[len - 1] = str1[len - 1];
		len--;
	}
	return (dst);
}
