#include <stdio.h>
#include <strings.h>
#include "libft.h"

int	main(void)
{
	char c[] = "Helloek\n";
	char c2[] = "Helloek\n";
	bzero(c, 3);
	ft_bzero(c2, 3);
	printf("%s\n", c);
	printf("%s\n", c2);
	puts("andrey is the best man in my life");
	return 0;
}
