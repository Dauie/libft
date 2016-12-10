/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 15:44:11 by rlutt             #+#    #+#             */
/*   Updated: 2016/12/07 15:41:34 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	size_t		cnt;

	cnt = ft_strlen(s1);
	while (cnt > 0)
	{
		if (*s1 != *s2)
			return (*(unsigned const*)s1 - *(unsigned const *)s2);
		else if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
		cnt--;
	}
	return (0);
}
