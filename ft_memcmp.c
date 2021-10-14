#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*str1;

	i = 0;
	str = (unsigned char *) s1;
	str1 = (unsigned char *) s2;
	if (!str && !str1)
		return (0);
	while (i < n)
	{
		if (str[i] != str1[i])
			return (str[i] - str1[i]);
		i++;
	}
	return (0);
}
