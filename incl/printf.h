/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 15:57:51 by rlutt             #+#    #+#             */
/*   Updated: 2018/08/23 00:14:12 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <string.h>
# include <stdarg.h>
# include <stdint.h>
# include "bool.h"
# include "cnvrsn.h"
# include "gnl.h"
# include "lst.h"
# include "mem.h"
# include "num.h"
# include "put.h"
# include "str.h"
# include "tbl.h"

typedef union
{
	int				i;
	signed char		sc;
	unsigned char	uc;
	short			s;
	unsigned short	us;
	long			l;
	unsigned long	ul;
	long long		ll;
	size_t			st;
	intmax_t		imt;
	uintmax_t		uimt;
}					t_data;

typedef struct		s_pfcore
{
	int				inx;
	int				tot;
	va_list			ap;
}					t_pfcore;

typedef struct		s_frmtnfo
{
	t_bool			actn: 1;
	t_bool			upper: 1;
	t_bool			algn: 1;
	t_bool			sign: 1;
	t_bool			hash: 1;
	t_bool			zero: 1;
	t_bool			spc: 1;
	t_bool			wneg: 1;
	t_bool			wprc: 1;
	char			type;
	char			mod;
	t_data			phd;
	int				prec;
	int				width;
	int				len;
}					t_frmtnfo;

int					ft_printf(const char *frmt, ...);
int					pf_parse(const char *frmt, t_pfcore *db);
int					pf_pause_parse(const char *frmt, t_pfcore *db);
int					pf_frmtnfo(const char *frmt, t_frmtnfo *ph, t_pfcore *db);
int					pf_phmaster(t_frmtnfo *ph, t_pfcore *db);
void				init_uinput(t_pfcore *db);
void				init_t_frmtnfo(t_frmtnfo *ipg);
int					pf_isflag(int c);
int					pf_istype(int c);
int					pf_iswidth(int c);
int					pf_print_s(t_frmtnfo *ph, t_pfcore *db);
int					pf_print_c(t_frmtnfo *ph, t_pfcore *db);
int					pf_print_i(t_frmtnfo *ph, t_pfcore *db);
void				manage_iwidprec(t_frmtnfo *ph);
void				manage_isign(t_frmtnfo *ph);
size_t				pf_inumlen(uintmax_t nb, int bse);
void				putpad_i(t_frmtnfo *ph, t_pfcore *db);
void				putprec(t_frmtnfo *ph, t_pfcore *db);
int					pf_print_o(t_frmtnfo *ph, t_pfcore *db);
int					pf_print_x(t_frmtnfo *ph, t_pfcore *db);
int					pf_print_p(t_frmtnfo *ph, t_pfcore *db);
void				pf_lmgmt_oux(t_pfcore *db, t_frmtnfo *ph);
int					pf_print_perc(t_frmtnfo *ph, t_pfcore *db);
int					pf_putstr(char *str, t_frmtnfo *ph, t_pfcore *db);
char				*pf_typechr(char *phstrt);
void				pf_get_width(const char *frmt, t_frmtnfo *ph, t_pfcore *db);
int					pf_phlen(const char *frmt, t_pfcore *db);
int					pf_putchar(char c, t_pfcore *db);
int					pf_putnbr(uintmax_t n, t_frmtnfo *ph, t_pfcore *db);
int					pf_isupper(int c);
char				*pf_itoabse(uintmax_t nbg, int bse, t_frmtnfo *ph);
int					pf_parse_mod(const char *frmt, t_pfcore *db, t_frmtnfo *ph);
int					pf_ismod_pre(const char *frmt, t_pfcore *db);
void				pf_lmgmt_id(t_pfcore *db, t_frmtnfo *ph);
void				pf_lmgmt_oux(t_pfcore *db, t_frmtnfo *ph);
void				pf_get_prec(const char *frmt, t_frmtnfo *ph, t_pfcore *db);
void				pf_tick_algn(t_frmtnfo *ph, t_pfcore *db);
void				pf_tick_hash(t_frmtnfo *ph, t_pfcore *db);
void				pf_tick_sign(t_frmtnfo *ph, t_pfcore *db);
void				pf_tick_zero(t_frmtnfo *ph, t_pfcore *db);
void				pf_tick_spc(t_frmtnfo *ph, t_pfcore *db);
size_t				pf_numlen(uintmax_t nb, int bse, t_frmtnfo *ph);

#endif
