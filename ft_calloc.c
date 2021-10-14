#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	mem = (void *) malloc (count * size);
	if (mem == NULL)
		return (NULL);
	ft_bzero(mem, count * size);
	return (mem);
}
