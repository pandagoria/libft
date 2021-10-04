#include <stdio.h>

int	main()
{
	char	a[] = " kef732487/][\'~";
	int 	i = 0;

	while (a[i])
	{
		printf("%d\n", ft_isprint(a[i]));
		i++;
	}
	return (0);
}

