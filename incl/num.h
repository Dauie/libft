/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 20:06:31 by rlutt             #+#    #+#             */
/*   Updated: 2018/08/25 17:20:40 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUM_H
# define NUM_H

# include <stddef.h>
# include <stdint.h>
# include <sys/time.h>

# define SQR(x) (x * x)

size_t				ft_numlen(intmax_t nb, int bse);
float				ft_getpercent(size_t a, size_t b);
long double			ft_timediff_ms(struct timeval *then, struct timeval *now);
long double			ft_timediff_sec(struct timeval *then, struct timeval *now);

#endif
