/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putclst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 13:16:07 by rlutt             #+#    #+#             */
/*   Updated: 2017/02/16 12:28:33 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/put.h"

void		ft_put_charlst(t_list *lst)
{
	t_list *tmp;

	tmp = lst;
	while (tmp)
	{
		ft_putendl(tmp->content);
		tmp = tmp->next;
	}
}
