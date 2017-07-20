/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tbl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 20:07:17 by rlutt             #+#    #+#             */
/*   Updated: 2017/07/20 13:57:42 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TBL_H
# define TBL_H

# include "str.h"
# include "num.h"

size_t				ft_tbllen(char **tbl);
size_t				ft_itbllen(int **tbl);
char				**ft_tbldup(char **tbl, int len);
void				ft_tbldel(char **tbl);
char				**tblcnew(size_t len);
long				**tblnnew(size_t len);
char				**ft_tbladdl(char **tbl, char *line);
char            	**ft_tblrmline(char **tbl, char *rm, int len);
int					ft_tblrepline(char **tbl, char *substr, char *repline);


#endif
