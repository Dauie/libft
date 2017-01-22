/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <ausdauerr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 19:49:35 by rlutt             #+#    #+#             */
/*   Updated: 2017/01/20 17:57:29 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	void		*c_cp;
	size_t		cs_cp;
	t_list		*res;

	if (!(res = (t_list*)ft_memalloc(sizeof(t_list))))
		return (NULL);
	if (content != NULL)
	{
		if (!(c_cp = (void *)ft_strnew(content_size)))
		{
			free(res);
			return (NULL);
		}
		cs_cp = content_size;
		ft_memcpy(c_cp, content, cs_cp);
		res->content = c_cp;
		res->content_size = cs_cp;
	}
	else
	{
		res->content = NULL;
		res->content_size = 0;
	}
	res->next = NULL;
	return (res);
}
