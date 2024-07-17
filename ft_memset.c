#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*t;
	size_t			i;

	i = 0;
	t = s;
	while (i < n)
	{
		t[i] = c;
		i++;
	}
	return (s);
}
