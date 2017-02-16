/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/17 21:48:04 by rlutt             #+#    #+#             */
/*   Updated: 2017/02/16 12:32:04 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/lst.h"

void	ft_lstadd(t_list **alst, t_list *nw)
{
	t_list	*tmp;

	tmp = *alst;
	if (tmp && nw)
		nw->next = tmp;
	*alst = nw;
}