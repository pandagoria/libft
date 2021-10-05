#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char c[] = "";
	char c2[] = "";
	char c3[] = "";
	char c4[] = "";
	printf("%d\n", ft_memcmp(c, c2, 8));
	printf("%d\n", memcmp(c3, c4, 8));
	puts("andrey is the best man in my life");
	return 0;
}
