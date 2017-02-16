/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tblcnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/01 15:50:26 by rlutt             #+#    #+#             */
/*   Updated: 2017/02/16 12:31:36 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/tbl.h"

char		**ft_tblcnew(int len)
{
	char **res;

	res = (char **)ft_memalloc(sizeof(char *) * (len + 1));
	res[len] = NULL;
	return (res);
}
