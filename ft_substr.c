#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int	i;

	sub = (char *) malloc((len - start) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	i = 0;
	while (start < len)
	{
		sub[i++] = s[start++];
	}
	return (sub);
}
