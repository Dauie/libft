/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tblnnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <ausdauerr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/01 15:50:26 by rlutt             #+#    #+#             */
/*   Updated: 2017/01/20 17:10:28 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

long		**ft_tblnnew(int len)
{
	long	**res;

	res = (long **)ft_memalloc(sizeof(long) * (len + 1));
	res[len] = 0;
	return (res);
}
