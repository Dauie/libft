/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsteadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <ausdauerr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 23:36:28 by rlutt             #+#    #+#             */
/*   Updated: 2016/12/12 23:37:09 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lsteadd(t_list **alst, t_list *nw)
{
	t_list	*tmp;

	tmp = *alst;
	if (tmp && nw)
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = nw;
	}
	nw->next = NULL;
}