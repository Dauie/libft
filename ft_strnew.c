/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <ausdauerr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 11:23:38 by rlutt             #+#    #+#             */
/*   Updated: 2016/12/08 20:10:10 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*res;

	res = (char *)malloc(sizeof(char) * size + 1);
	if (!res)
		return (NULL);
	ft_memset(res, 0, size + 1);
	return (res);
}