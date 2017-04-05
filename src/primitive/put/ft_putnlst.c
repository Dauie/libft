/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnlst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 13:12:39 by rlutt             #+#    #+#             */
/*   Updated: 2017/04/05 10:46:20 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/put.h"

void		ft_putnlst(t_list *lst)
{
	t_list *tmp;

	tmp = lst;
	while (tmp)
	{
		ft_putnbr((intmax_t)tmp->content);
		ft_putchar('\n');
		tmp = tmp->next;
	}
}
