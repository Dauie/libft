/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrrev.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <ausdauerr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 14:33:41 by rlutt             #+#    #+#             */
/*   Updated: 2017/01/03 14:33:56 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void		ft_putstrrev(char *str)
{
	char *res;

	if (!(res = ft_strnew(sizeof(char) * ft_strlen(str))))
		return ;
	res = ft_strrev(str);
	ft_putstr(res);
}
