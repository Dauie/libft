/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isstralpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <ausdauerr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/01 15:59:15 by rlutt             #+#    #+#             */
/*   Updated: 2017/01/01 15:59:25 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int			ft_isstralpha(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (ft_isalpha(str[i]) == 0)
			return (0);
		i++;
	}
	return(1);
}