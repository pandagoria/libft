#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (0);
	sub = (char *) malloc((len + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	i = 0;
	s_len = ft_strlen(s);
	while (i < len && len <= s_len)
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}
