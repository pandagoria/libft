#include "libft.h"

t_size	ft_strlcpy(char *dst, const char *src, t_size dst_size)
{
	t_size	i;

	i = 0;
	if (dst_size > ft_strlen(dst))
		return (0);
	while (i < dst_size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
