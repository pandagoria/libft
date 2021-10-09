#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int		i;
	char	*pntr;

	i = ft_strlen(str);
	pntr = (char *) str;
	while (i >= 0)
	{
		if (pntr[i] == (char) ch)
			return (&pntr[i]);
		i--;
	}
	if (ch == '\0')
		return (&pntr[i]);
	return (0);
}
