#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		len;
	int		i;

	if (!s1 || !set)
		return (0);
	len = ft_strlen(s1) - 1;
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[len] && ft_strchr(set, s1[len]))
		len--;
	new = ft_substr((char *) s1, i, len - i + 1);
	return (new);
}
