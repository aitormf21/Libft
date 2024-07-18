#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int		ft_isalpha(int v);
int		ft_isdigit(int v);
int		ft_isalnum(int v);
int		ft_isascii(int v);
int		ft_isprint(int v);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
#endif
