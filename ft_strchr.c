char	*ft_strchr(const char *str, int ch)
{
	int		i;
	char	*pntr;

	i = 0;
	pntr = (char *) str;
	while (pntr[i])
	{
		if (pntr[i] == ch)
			return (&pntr[i]);
		i++;
	}
	return (0);
}
