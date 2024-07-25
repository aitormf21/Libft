#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*des;

	if (!s || !f)
		return (NULL);
	des = ft_calloc(sizeof(char), (ft_strlen(s) + 1));
	if (!des)
		return (NULL);
	i = 0;
	while (s[i])
	{
		des[i] = f(i, s[i]);
		i++;
	}
	return (des);
}
