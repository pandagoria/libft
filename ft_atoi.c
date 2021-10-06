#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	minus;
	int	number;

	i = 0;
	minus = 1;
	number = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = (str[i] - '0') + (number * 10);
		i++;
	}
	return (number * minus);
}
