#include "stdlib.h"
#include <stdio.h>

char	*ft_strchr(const char *str, int ch)
{
	int		i;
	char	*pntr;

	i = 0;
	pntr = (char *) str;
	while (pntr[i])
	{
		if (pntr[i] == (char) ch)
			return (&pntr[i]);
		i++;
	}
	if (ch == '\0')
		return (&pntr[i]);
	return (0);
}
