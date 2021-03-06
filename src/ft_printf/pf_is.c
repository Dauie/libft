/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_is.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 19:43:05 by rlutt             #+#    #+#             */
/*   Updated: 2018/06/26 10:58:04 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

int			pf_isflag(int c)
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
	else if (c == '.')
		return (7);
	else
		return (0);
}

int			pf_istype(int c)
{
	if (c == 'c' || c == 'C' || c == 's' || c == 'S'
	|| c == 'd' || c == 'D' || c == 'i' || c == 'p'
	|| c == 'o' || c == 'O' || c == 'u' || c == 'U'
	|| c == 'x' || c == 'X' || c == '%')
		return (1);
	else
		return (0);
}

int			pf_isupper(int c)
{
	if (c == 'S' || c == 'D' || c == 'O' ||
		c == 'U' || c == 'X' || c == 'C')
		return (1);
	else
		return (0);
}

int			pf_isoxdi(int c)
{
	if (c == 'x' || c == 'X')
		return (1);
	else if (c == 'o' || c == 'O')
		return (2);
	else if (c == 'i' || c == 'd' || c == 'D')
		return (3);
	else
		return (0);
}
