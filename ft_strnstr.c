#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, t_size len)
{
	char	cp_hstck[len];
	t_size	i;

	i = 0;
	if (!ft_strlen(needle))
		return ((char *)haystack);
	else if (len == 0)
		return (0);
	else if ((int)len < 0)
		len = ft_strlen(haystack);
	while (i < len)
	{
		cp_hstck[i] = haystack[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		if (ft_strncmp(&cp_hstck[i], needle, ft_strlen(needle)) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}
