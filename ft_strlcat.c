#include "libft.h"

t_size	ft_strlcat(char *dst, const char *src, t_size dst_size)
{
	char	*d_str;
	char	*s_str;
	t_size	dst_len;
	t_size	i;

	d_str = (char *) dst;
	s_str = (char *) src;
	dst_len = ft_strlen(dst);
	i = 0;
	if (dst_size <= dst_len)
		return (ft_strlen(src) + dst_size);
	while (dst_len + i < dst_size - 1 && s_str[i])
	{
		d_str[dst_len + i] = s_str[i];
		i++;
	}
	d_str[dst_len + i] = '\0';
	return (dst_len + ft_strlen(src));
}
