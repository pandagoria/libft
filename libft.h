#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.c>

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
int		ft_atoi(const char *str);
void	*ft_memset(void *b, int c, t_size len);
void	*ft_memchr(const void *s, int c, t_size n);
void	*ft_memcpy(void *dst, const void *src, t_size n);
void	ft_bzero(void *s, t_size n);
void	*ft_memmove(void *dst, const void *src, t_size len);
char	*ft_strnstr(const char *haystack, const char *needle, t_size len);
char	*ft_strrchr(const char *str, int ch);
char	*ft_strchr(const char *str, int ch);
t_size	ft_strlen(const char *s);
t_size	ft_strlcpy(char *dst, const char *src, t_size dst_size);
t_size	ft_strlcat(char *dst, const char *src, t_size dst_size);

#endif
