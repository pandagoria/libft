#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, t_size n)
{
	t_size	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
