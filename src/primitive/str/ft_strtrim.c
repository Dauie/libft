/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 17:33:00 by rlutt             #+#    #+#             */
/*   Updated: 2018/05/21 15:45:30 by dauie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/str.h"

char			*ft_strtrim(char const *s)
{
	char		*ec;
	char		*res;
	size_t		i;
	char		*tmp;

	i = 0;
	tmp = (char*)s;
	if (!tmp)
		return (NULL);
	if (ft_cnttotspc(tmp) == ft_strlen(tmp))
		return (ft_strdup(""));
	ec = tmp + (ft_strlen(tmp) - 1);
	while ((*ec == ' ' || *ec == '\n' || *ec == '\t'))
		ec--;
	ec++;
	while ((*tmp == ' ' || *tmp == '\n' || *tmp == '\t') && *tmp)
		tmp++;
	if (!(res = ft_strnew(ec - tmp)))
		return (NULL);
	while ((tmp < ec) && *tmp)
		res[i++] = *tmp++;
	res[i] = '\0';
	return (res);
}
