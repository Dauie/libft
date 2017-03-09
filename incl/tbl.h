/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tbl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 20:07:17 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/08 15:23:16 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TBL_H
# define TBL_H

# include "str.h"
# include "num.h"

size_t				ft_tbllen(char **tbl);
size_t				ft_itbllen(int **tbl);
void				ft_tbldel(char **tbl);
char				**tblcnew(size_t len);
long				**tblnnew(size_t len);
char				**ft_tbladdl(char **tbl, char *line);

#endif
