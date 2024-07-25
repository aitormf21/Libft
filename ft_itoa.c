#include "libft.h"

int	ft_numlen(long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			len;
	long		num;
	char		*res;

	num = n;
	len = ft_numlen(n);
	res = ft_calloc(sizeof(char ), len + 1);
	if (!res)
		return (NULL);
	if (n == 0)
		res[0] = '0';
	if (n < 0)
	{
		res[0] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		len--;
		res[len] = (num % 10) + '0';
		num /= 10;
	}
	return (res);
}
