#include "libft.h"

t_size	ft_strlcat(char *dst, const char *src, t_size dst_size)
{
	char	*d_str;
	char	*s_str;
	t_size	i;
	//t_size	j;

	d_str = (char *) dst;
	s_str = (char *) src;
	i = ft_strlen(dst);
	//j = 0;
	if (dst_size == 0)
		return (ft_strlen(src));
	while (!*s_str)
	{
		d_str[i++] = *s_str++;
	}
	d_str[i] = '\0';
	return (i + ft_strlen(src));
}
