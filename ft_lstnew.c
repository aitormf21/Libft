/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitormar <aitormar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:59:57 by aitormar          #+#    #+#             */
/*   Updated: 2024/09/02 13:07:14 by aitormar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_list;

	new_list = ft_calloc(sizeof(t_list), 1);
	if (!new_list)
		return (NULL);
	new_list->content = content;
	new_list->next = NULL;

	return (new_list);
}
