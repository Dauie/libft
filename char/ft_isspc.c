/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <ausdauerr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 19:20:08 by rlutt             #+#    #+#             */
/*   Updated: 2016/12/15 19:25:43 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		ft_isspc(int c)
{
	if (c == '\n' || c == '\t' || c == '\v' ||
			c == '\f' || c == '\r' || c == ' ')
		return (1);
	else
		return (0);
}