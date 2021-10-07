#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, t_size len)
{
	t_size	i;
	char	*match;

	i = 0;
	if (!ft_strlen(needle))
		return ((char *)haystack);
	if (!len)
		return (0);
	while (i < len - 1)
	{
		if (ft_strncmp(needle, &haystack[i], ft_strlen(needle)) == 0)
		{
			match = (char *)&haystack[i];
			return (match);
		}
		i++;
	}
	return (0);
}
