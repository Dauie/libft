/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <ausdauerr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 17:33:00 by rlutt             #+#    #+#             */
/*   Updated: 2016/12/09 00:13:05 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char 	*ft_strtrim(char const *s)
{
	char 		*ec;
	char		*res;
	size_t		i;

	i = 0;
	res = NULL;
	if (!s)
		return (NULL);
	if (ft_cnttotspc((char *) s) == ft_strlen(s))
		return (res = "");
	ec = (char *) s + (ft_strlen(s) - 1);
	while (*ec == ' ' || *ec == '\n' || *ec == '\t')
		ec--;
	ec++;
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	res = ft_strnew(sizeof(char) * (ec - s));
	if (res == NULL || *s == '\0')
		return (NULL);
	while (s < ec) {
		res[i] = *s;
		s++;
		i++;
	}
	res[i] = '\0';
	return (res);
}
