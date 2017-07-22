/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstrip.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 14:18:12 by rlutt             #+#    #+#             */
/*   Updated: 2017/07/20 21:58:07 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/str.h"
#include "../../../incl/printf.h"
#include <stdio.h>
static int ft_strcntchar(char *str, int c)
{
	int i;
	int cnt;

	cnt = 0;
	i = -1;
	while (str[++i])
	{
		if (str[i] == c)
			cnt++;
	}
	return (cnt);
}

void ft_strstrip(char **str, int c)
{
	int 	i;
	int 	j;
	char 	*rep;

	rep = NULL;
	// i = -1;
	// j = -1;
	// ft_printf("got in\n");
	if (!str || !c) {
		// ft_printf("test\n");
		return ;
	}
	if (!(rep = ft_strnew(ft_strlen(*str) -  ft_strcntchar(*str, c))))
	{
		// ft_printf("yup\n");
		return ;
		}
		printf("%p\n", *str);
		ft_printf("%s\n", *str);
	j = 0;
	i = 0;
	while (*str[j])
	{
		if (*str[j] != c) {
			rep[i] = *str[j];
			i++;
		}
		j++;
	}
	ft_strcpy(rep, *str);
	// ft_printf("%s\n", rep);
	// free(str);
	ft_printf("%p", *str);
	*str = rep;
}