/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <ausdauerr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 14:12:23 by rlutt             #+#    #+#             */
/*   Updated: 2016/12/06 14:58:33 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	buff;

	i = 0;
	len = ft_strlen(str);
	while (len - 1 > i)
	{
		buff = str[i];
		str[i] = str[len - 1];
		str[len - 1] = buff;
		len--;
		i++;
	}
	return (str);
}
