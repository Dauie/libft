/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <ausdauerr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 19:50:30 by rlutt             #+#    #+#             */
/*   Updated: 2017/01/20 13:16:41 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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

