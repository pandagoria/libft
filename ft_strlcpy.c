#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, t_size dst_size)
{
	size_t	i;

	i = 0;
	if (ft_strlen(src) + 1 < dst_size)
		ft_memcpy(dst, src, ft_strlen(src) + 1);
	else if (dst_size != 0)
	{
		ft_memcpy(dst, src, dst_size - 1);
		dst[dst_size - 1] = '\0';
	}
	return (ft_strlen(src));
}
