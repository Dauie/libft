/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 05:48:57 by rlutt             #+#    #+#             */
/*   Updated: 2017/02/16 12:32:23 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/lst.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*lptr;

	lptr = lst;
	if (lptr && f)
	{
		while (lptr)
		{
			(*f)(lptr);
			lptr = lptr->next;
		}
	}
}
