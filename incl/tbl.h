/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tbl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 20:07:17 by rlutt             #+#    #+#             */
/*   Updated: 2018/08/20 15:12:45 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TBL_H
# define TBL_H

# include <stdlib.h>
# include "str.h"
# include "num.h"

size_t				ft_tbllen(char **tbl);
size_t				ft_itbllen(int **tbl);
char				**ft_tbldup(char **tbl, size_t len);
void				ft_tbldel(char ***tbl);
char				*ft_getenvar(char **env, char *qry, size_t qlen);
char				**ft_tbladdl(char **tbl, char *line);
char				**ft_tblrmline(char **tbl, char *rm, size_t len);
int					ft_tblrepline(char **tbl, char *substr, char *repline);
char				**ft_crafttbl(size_t amt, ...);

#endif
