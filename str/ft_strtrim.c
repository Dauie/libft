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

#include "../libft.h"

char			*ft_strtrim(char const *s)
{
	char		*ec;
	char		*res;
	size_t		i;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_cnttotspc((char *)s) == ft_strlen(s))
		return (ft_strdup(""));
	ec = (char *)s + (ft_strlen(s) - 1);
	while ((*ec == ' ' || *ec == '\n' || *ec == '\t') && *s)
		ec--;
	ec++;
	while ((*s == ' ' || *s == '\n' || *s == '\t') && *s)
		s++;
	res = ft_strnew(ec - s);
	if (!res)
		return (NULL);
	while ((s < ec) && *s)
		res[i++] = *s++;
	res[i] = '\0';
	return (res);
}
