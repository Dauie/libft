/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 19:59:35 by rlutt             #+#    #+#             */
/*   Updated: 2017/02/16 12:32:30 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/lst.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*fst;
	t_list	*nue;

	if (!lst || !f)
		return (NULL);
	nue = f(lst);
	fst = nue;
	lst = lst->next;
	while (lst)
	{
		nue->next = f(lst);
		nue = nue->next;
		lst = lst->next;
	}
	nue->next = NULL;
	return (fst);
}
