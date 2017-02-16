/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrrev.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 14:33:41 by rlutt             #+#    #+#             */
/*   Updated: 2017/02/16 12:29:07 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/put.h"

void		ft_putstrrev(char *str)
{
	char *res;

	if (!(res = ft_strnew(sizeof(char) * ft_strlen(str))))
		return ;
	res = ft_strrev(str);
	ft_putstr(res);
}
