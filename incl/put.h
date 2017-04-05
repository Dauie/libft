/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 20:06:59 by rlutt             #+#    #+#             */
/*   Updated: 2017/04/05 11:06:31 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUT_H
# define PUT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include "lst.h"
# include "str.h"
# include "num.h"

void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putstrrev(char *str);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putnbr_fd(intmax_t n, int fd);
void				ft_putnbr(intmax_t n);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putendl(char const *s);
void				ft_putchar_fd(char c, int fd);
void				ft_putclst(t_list *lst);
void				ft_putnlst(t_list *lst);

#endif
