#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char c[20] = "fff";
	char b[] = "ioioio";
	char c_my[20] = "fff";
	char b_my[] = "ioioio";
	printf("%lu %s\n", strlcat(c, b, 20), c);
	printf("%lu %s\n", ft_strlcat(c_my, b_my, 20), c_my);
	puts("andrey is the best man in my life");
	return 0;
}
