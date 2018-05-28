/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinn.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dauie <dauie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 18:46:27 by dauie             #+#    #+#             */
/*   Updated: 2018/05/27 19:04:32 by dauie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/str.h"

char	*ft_strjoinn(int n, ...)
{
	va_list	ap;
	char	**tmp;
	char	*res;
	int		len;
	int		i;

	len = 0;
	i = -1;
	va_start(ap, n);
	if (!(tmp = ft_memalloc(sizeof(char *) * (n + 1))))
		return (NULL);
	while (++i < n)
	{
		tmp[i] = va_arg(ap, char *);
		len += ft_strlen(tmp[i]);
	}
	if (!(res = ft_memalloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = -1;
	while (++i < n)
		ft_strcat(res, tmp[i]);
	free(tmp);
	return (res);
}