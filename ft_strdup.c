#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	int		size;

	size = ft_strlen(s);
	ptr = ft_calloc(sizeof(char ), (size + 1));
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s, size);
	ptr[size] = '\0';
	return (ptr);
}
