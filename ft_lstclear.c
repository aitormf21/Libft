/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitormar <aitormar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 16:22:28 by aitormar          #+#    #+#             */
/*   Updated: 2024/09/02 16:30:36 by aitormar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ndel;

	ndel = *lst;
	while (ndel)
	{
		del(ndel->content);
		free(ndel);
		ndel = ndel->next;
	}
	free(lst);
	*lst = NULL;
}
