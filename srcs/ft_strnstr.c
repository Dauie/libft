/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <ausdauerr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 20:00:47 by rlutt             #+#    #+#             */
/*   Updated: 2016/12/07 14:52:12 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *little, size_t n)
{
	unsigned int i;
	char *res;

	i = 0;
	if (little == NULL || ft_strlen(little) == 0)
		return ((char*)big);
	while (i < n)
	{
		if (ft_strncmp((char*)&big[i], little, n) == 0)
			return (res = (char *)&big[i]);
		i++;
	}
	return (NULL);
}
