/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitormar <aitormar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 10:03:21 by aitormar          #+#    #+#             */
/*   Updated: 2024/07/27 10:03:22 by aitormar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
