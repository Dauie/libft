/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <ausdauerr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 13:31:03 by rlutt             #+#    #+#             */
/*   Updated: 2016/12/08 14:23:29 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		ft_tolower(int c)
{
	if (c != '\0')
	{
		if (c >= 65 && c <= 90)
		{
			c += 32;
			return (c);
		}
	}
	return (c);
}
