#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char c[] = "Hello ppl";
	char b[] = "dfg";
	char c_my[] = "Hello ppl";
	char b_my[] = "dfg";
	printf("%lu %s\n", strlcpy(c, b, strlen(c)), c);
	printf("%lu %s\n", ft_strlcpy(c_my, b_my, strlen(c_my)), c_my);
	puts("andrey is the best man in my life");
	return 0;
}
