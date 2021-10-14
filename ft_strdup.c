#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*dup;

	i = ft_strlen(s1) + 1;
	dup = (char *) malloc(i * sizeof(char));
	if (dup == NULL)
		return (NULL);
	ft_strlcpy(dup, s1, i);
	return (dup);
}
