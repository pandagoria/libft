#include "libft.h"
#include <stdio.h>

static int	words_c(char const *s, char c)
{
	int	am;
	int	flag;

	am = 0;
	flag = 0;
	while (*s++ != '\0')
	{
		printf("|%c||%c|\n", *s, c);
		if (*s != c && flag == 0)
		{
			am++;
			flag = 1;
		}
		else if (*s == c)
			flag = 0;
	}
	return (am);
}

static int	word_len(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s != c && *s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

static void	free_mat(char **mat, int i)
{
	while (i--)
		free(mat[i]);
}

char	**ft_split(char const *s, char c)
{
	char	**mat;
	int		words;
	int		i;

	if (!s)
		return (0);
	words = words_c(s, c);
	printf("%d\n", words);
	if (!( mat = (char **) malloc((words + 1) * sizeof(char *))))
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		
		if (!(mat[i] = ft_substr(s, 0, (word_len(s, c)))))
			free_mat(mat, i);
		s = (s + word_len(s, c));
		i++;
	}
	mat[words] = NULL;
	return (mat);
}
