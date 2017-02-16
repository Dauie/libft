/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnewstak.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 15:53:01 by rlutt             #+#    #+#             */
/*   Updated: 2017/02/16 12:32:38 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/lst.h"

t_list		*ft_lstnewstak(void const *content, size_t content_size)
{
	t_list		*res;

	if (!(res = (t_list*)ft_memalloc(sizeof(t_list))))
		return (NULL);
	if (content != NULL)
	{
		res->content = (void *)content;
		res->content_size = content_size;
	}
	else
	{
		res->content = NULL;
		res->content_size = 0;
	}
	res->next = NULL;
	return (res);
}
