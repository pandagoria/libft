#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, t_size n)
{
	t_size	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] == s2[i])
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			break;
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
