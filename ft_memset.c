/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitormar <aitormar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 12:58:19 by aitormar          #+#    #+#             */
/*   Updated: 2024/07/20 12:58:20 by aitormar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
