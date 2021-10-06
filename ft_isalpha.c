int	ft_isalpha(int c)
{
	if ((c < 91 && c > 64) || (c > 96 && c < 123))
		return (1);
	return (0);
}
