#ifndef LIBFT_H
# define LIBFT_H

typedef unsigned long	t_size;
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_strncmp(const char *s1, const char *s2, t_size n);
int		ft_memcmp(const void *s1, const void *s2, t_size n);
void	*ft_memset(void *b, int c, t_size len);
void	*ft_memchr(const void *s, int c, t_size n);
void	*ft_memcpy(void *restrict dst, const void *restrict src, t_size n);
void	ft_bzero(void *s, t_size n);
t_size	ft_strlen(const char *s);
t_size	ft_strlcpy(char *restrict dst, const char *restrict src, t_size dst_size);

#endif
