/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 20:06:31 by rlutt             #+#    #+#             */
/*   Updated: 2018/08/22 16:10:14 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUM_H
# define NUM_H

# include <stddef.h>
# include <stdint.h>

# define SQR(x) (x * x)

size_t				ft_numlen(intmax_t nb, int bse);
long				ft_addn(int n, ...);

#endif
