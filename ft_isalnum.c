int	ft_isalnum(int c)
{
	if ((c > 47 && c < 58) || (c < 91 && c > 64) || (c > 96 && c < 123))
		return (c);
	return (0);
}