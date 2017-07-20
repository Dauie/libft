/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tblrmline.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 12:22:57 by rlutt             #+#    #+#             */
/*   Updated: 2017/07/20 12:26:23 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/tbl.h"

char            **ft_tblrmline(char **tbl, char *rm, int len)
{
        int             i;
        char    **res;
        char    **tmp;

        i = -1;
        res = NULL;
        if (rm)
        {
                if (!(res = (char **)ft_memalloc(sizeof(char *) * len)))
                        return (NULL);
                tmp = res;
                while (++i < len)
                {
                        if (ft_strcmp(rm, *tbl) != 0)
                        {
                                *tmp = ft_strdup(*tbl);
                                tbl++;
                                tmp++;
                        }
                        else
                                tbl++;
                }
        }
        return (res);
}