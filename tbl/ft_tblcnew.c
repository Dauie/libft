/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tblcnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <ausdauerr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/01 15:50:26 by rlutt             #+#    #+#             */
/*   Updated: 2017/01/23 13:02:28 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char		**ft_tblcnew(int len)
{
	char **res;

	res = (char **)ft_memalloc(sizeof(char *) * (len + 1));
	res[len] = NULL;
	return (res);
}
