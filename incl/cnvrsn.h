/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cnvrsn.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 20:06:19 by rlutt             #+#    #+#             */
/*   Updated: 2017/04/05 10:15:44 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CNVRSN_H
# define CNVRSN_H

# include "char.h"
# include "bool.h"
# include "cnvrsn.h"
# include "gnl.h"
# include "lst.h"
# include "mem.h"
# include "num.h"
# include "printf.h"
# include "put.h"
# include "str.h"
# include "tbl.h"

int					ft_atoi(char *str);
char				*ft_itoa(intmax_t n);
char				*ft_itoabse(intmax_t nbg, int bse);

#endif
