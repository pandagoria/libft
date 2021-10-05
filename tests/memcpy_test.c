#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char c[] = "Helloek\n";
	char c2[] = "OO";
	char c3[] = "Helloek\n";
	char c4[] = "OO";
	ft_memcpy(c2, c, 10);
	memcpy(c4, c3, 10);
	printf("%s\n", c2);
	printf("%s\n", c4);
	puts("andrey is the best man in my life");
	return 0;
}
