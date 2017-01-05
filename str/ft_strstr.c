/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <ausdauerr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 20:00:47 by rlutt             #+#    #+#             */
/*   Updated: 2016/12/09 02:22:13 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char				*ft_strstr(const char *big, const char *little)
{
	unsigned int	i;
	char			*res;

	i = 0;
	if (ft_strlen(little) == 0)
		return ((char*)big);
	while (i < ft_strlen(big))
	{
		if (ft_strncmp((char*)&big[i], little, ft_strlen(little)) == 0)
			return (res = (char *)&big[i]);
		i++;
	}
	return (NULL);
}
