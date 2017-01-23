/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <ausdauerr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/22 14:55:51 by rlutt             #+#    #+#             */
/*   Updated: 2017/01/23 12:55:35 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list		*ft_lstdup(t_list *lst)
{
	t_list	*dup;

	if (!lst)
		return (NULL);
	if (!lst->next)
		return (dup = ft_lstnew(lst->content, lst->content_size));
	else
	{
		dup = ft_lstnew(lst->content, lst->content_size);
		dup->next = ft_lstdup(lst->next);
		return (dup);
	}
}
