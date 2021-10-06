#include "libft.h"

void	*ft_memset(void *b, int c, t_size len)
{
	t_size			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *) b;
	if (ft_strlen(b) < len)
	{
		return (0);
	}
	while (i < len && *(str + i) != '\0')
	{
		str[i] = (unsigned char) c;
		i++;
	}
	return (b);
}
