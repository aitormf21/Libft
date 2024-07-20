/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitormar <aitormar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 13:16:56 by aitormar          #+#    #+#             */
/*   Updated: 2024/07/20 14:43:29 by aitormar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (src == NULL && dest == NULL)
		return (NULL);
	if (d >= s)
	{
		i = n;
		while (i > 0)
		{
			d[n] = s[n];
			i--;
		}
	}
	else
		ft_memcpy(d, s, n);
	return (dest);
}
