/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitormar <aitormar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 16:39:51 by aitormar          #+#    #+#             */
/*   Updated: 2024/07/20 16:48:14 by aitormar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	l;

	i = 0;
	str = (unsigned char *)s;
	l = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == l)
			return (str + i);
		i++;
	}
	return (NULL);
}
