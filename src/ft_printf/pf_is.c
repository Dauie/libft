/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_is.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 19:43:05 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/04 12:45:36 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

int			pf_isflag(char c)
{
	if (c == '#' || c == '-' || c == '+' || c == '0' || pf_iswidth(c))
	{
		if (c == '-')
			return (1);
		else if (pf_iswidth(c))
			return (2);
		else if (c == '#')
			return (3);
		else if (c == '+')
			return (4);
		else if (c == '0')
			return (5);
		else if (c == ' ')
			return (6);
	}
	return (0);
}

int			pf_istype(char c)
{
	if (c == 'c' || c == 'C' || c == 's' || c == 'S'
	|| c == 'd' || c == 'D' || c == 'i' || c == 'p'
	|| c == 'o' || c == 'O' || c == 'u' || c == 'U'
	|| c == 'x' || c == 'X' || c == '%')
		return (1);
	else
		return (0);
}

int			pf_iswidth(int c)
{
	if (c >= '1' && c <= '9')
		return (1);
	else
		return (0);
}
