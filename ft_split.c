#include "libft.h"
#include <stdio.h>

static int	word(char const *s, char c)
{
	int	am;

	am = 0;
	while (*s++)
	{
		if (*s == c)
			am++;
	}
	am++;
	return (am);
}
char	**ft_split(char const *s, char c)
{
	char	**mat;
	int		words_c;
	int		i;
	int		j;
	int		k;

	words_c = word(s, c);
	printf("%d", words_c);
	mat = (char **) malloc((words_c + 1) * sizeof(char *));
	if (mat == NULL)
		return (NULL);
	i = 0;
	j = 0;
	k = 0;
	mat[words_c] = 0;
	while (s[k])
	{
		if (s[k] == c)
		{
			mat[j][i] = (char) malloc (1 * sizeof(char));
			mat[j][i] = '\0';
			i = 0;
			j++;
		}
		if (s[k] != c)
		{
			mat[j][i] = (char) malloc (1 * sizeof(char));
			mat[j][i] = s[k];
			i++;
		}
		k++;
	}
	/*while (j < words_c)
	{
		while (*s)
		{
			if (s )
			mat[j][i] = (char) malloc (1 * sizeof(char));
			mat[j][i] = *s;
			i++;
		}
		mat[j][i] = (char) malloc (1 * sizeof(char));
		mat[j][i] = '\0';
		i = 0;
		printf("%c\n", mat[j][i]);
		j++;
	}*/
	return (mat);
}
