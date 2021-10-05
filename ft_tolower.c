#include "libft.h"

int	tolower(int c)
{
	if (c > 64 && c < 91)
		c = c + 32;
	return (c);
}
