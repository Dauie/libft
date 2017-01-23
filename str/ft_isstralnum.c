/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isstralnum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <ausdauerr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/01 15:59:33 by rlutt             #+#    #+#             */
/*   Updated: 2017/01/23 13:05:08 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int			ft_isstralnum(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (ft_isalnum(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
