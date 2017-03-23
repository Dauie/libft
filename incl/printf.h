/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 15:57:51 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/22 18:31:57 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* %sSpdDioOuUxXcC
------------------------------------
'%': print '%' w/o flags, prec, len.
's': print null terminated string.
'S': print capitalize null terminated string.
'p': print void* Pointer to void.
'c': print single character.
'D':
'd'/'i' : print int as a signed decimal.
'o': print unsigned octal;
'O': print unsigned ocatal capitalized.
'u': print decimal unsigned int.
'U':
'x': print unsigned int as hex lowercase.
'X': print unsigned int as hex uppercase.
 */
/*%[flags][width][.precision][length]type*/
 /*'hh', 'h', 'l', 'll', 'j', 'z', '+', '-', ' ', '#', '.'*/
 /*
    -      Left justify.
    0  	  Field is padded with 0's instead of blanks.
    +	  Sign of number always O/P.
   ' '     Positive values begin with a blank.
    # 	  Various uses:
 	  %#o (Octal) 0 prefix inserted.
 	  %#x (Hex)   0x prefix added to non-zero values.
 	  %#X (Hex)   0X prefix added to non-zero values.
 	  %#e         *Always show the decimal point.
 	  %#E         *Always show the decimal point.
 	  %#f         *Always show the decimal point.
 	  %#g         *Always show the decimal point trailing
 	  	      		zeros not removed.
 	  %#G         *Always show the decimal point trailing
 		      		zeros not removed	.
 */

#ifndef PRINTF_H
# define PRINTF_H


# include <string.h>
# include <stdarg.h>
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

/* 'hh' (H), 'h', 'l', 'll'(L), 'j', 'z' */

static char *LHEX = {"0123456789abcdef"};
static char *UHEX = {"0123456789ABCDEF"};

typedef union
{
	int					i;
	signed char			sc;
	unsigned char 		uc;
	short				s;
	unsigned short 		us;
	long 				l;
	unsigned long		ul;
	long long			ll;
	size_t				st;
	unsigned long long 	ull;
	intmax_t			imt;
	uintmax_t			uimt;

}		data;

typedef struct	user_input
{
	int			inx;		/* Current index in format string */
	int			tot;		/* Count of characters printed */
	va_list		ap;			/* Argument List */
}				uiput;

typedef struct	format_info
{
	char		type;
	char		mod;
	data		phd;
	t_blean		actn;		/* Placeholder type */
	t_blean		upper; 		/* Print placeholder in UPPERCASE */
	t_blean		algn;		/* '-' Left align placeholder */
	t_blean		sign;		/* '+' Show sign (- , +) */
	t_blean		hash;		/* Prepend w/ or leave '0', Always show decimal */
	t_blean		hashz;		/* blean for zero */
	t_blean		zero;		/* Replace padding ' ' with '0' */
	t_blean		spc;		/* Use ' ' on int instead of '0' */
	t_blean		wneg;		/* If number was negetive*/
	int			prec;		/* Precision: Max # of output */
	int			width;		/* Width : Minimum # of output */
	int			len;		/* Placeholder Length */
}				attrib;

int 			ft_printf(const char *frmt, ...);
void	 		pf_parse(const char *frmt, uiput *db);
int				pf_pause_parse(const char *frmt, uiput *db);
void 			pf_get_attrib(const char *frmt, attrib *ph, uiput *db);
int				pf_phmaster(attrib *ph, uiput *db);
void 			init_uinput(uiput *db);
void 			init_attrib(attrib *ipg);
int				pf_isflag(int c);
int				pf_istype(int c);
int				pf_iswidth(int c);
int				pf_print_s(attrib *ph, uiput *db);
int				pf_print_c(attrib *ph, uiput *db);
int				pf_print_i(attrib *ph, uiput *db);
int				pf_print_o(attrib *ph, uiput *db);
int				pf_print_x(attrib *ph, uiput *db);
int				pf_print_u(attrib *ph, uiput *db);
void 			pf_lmgmt_oux(uiput *db, attrib *ph);

int				pf_print_perc(attrib *ph, uiput *db);
int				puterror(int ecode);
int				pf_putstr(char *str, attrib *ph, uiput *db);
char 			*pf_typechr(char *phstrt);
void 			pf_get_width(const char *frmt, attrib *ph, uiput *db);
int				pf_phlen(const char *frmt, uiput *db);
int				pf_putchar(char c, attrib *ph, uiput *db);
int				pf_putnbr(int n, attrib *ph, uiput *db);
int				pf_isupper(int c);
int				pf_isoxdi(int c);
char			*pf_itoabse(intmax_t nbg, int bse, attrib *ph);
int				pf_parse_mod(const char *frmt, uiput *db, attrib *ph);
int				pf_ismod_pre(const char *frmt, uiput *db);
void 			pf_lmgmt_id(uiput *db, attrib *ph);
void 			pf_lmgmt_oux(uiput *db, attrib *ph);
void 			pf_get_prec(const char *frmt, attrib *ph, uiput *db);
void 			pf_make_precise(char *strt, attrib *ph);
void 			pf_tick_algn(attrib *ph, uiput *db);
void 			pf_tick_hash(attrib *ph, uiput *db);
void 			pf_tick_sign(attrib *ph, uiput *db);
void 			pf_tick_zero(attrib *ph, uiput *db);
void 			pf_tick_spc(attrib *ph, uiput *db);

#endif
