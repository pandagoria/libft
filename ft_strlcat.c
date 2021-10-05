#include "libft.h"

t_size	ft_strlcat(char *restrict dst, const char *restrict src, t_size dst_size)
{
	t_size	s_len;
	t_size	init_len;
	t_size	i;

	s_len = ft_strlen(dst);
	init_len = ft_strlen(dst);
	i = 0;
	while (s_len < dst_size - 1)
	{
		dst[s_len] = src[i];
		i++;
		s_len++;
	}
	dst[s_len] = '\0';
	return (init_len + ft_strlen(src));
}
