/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 15:57:51 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/03 19:52:20 by rlutt            ###   ########.fr       */
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

# include <stdarg.h>
# include "bool.h"
# include "cnvrsn.h"
# include "mem.h"
# include "char.h"
# include "str.h"
# include "num.h"
# include "put.h"
# include "tbl.h"

static char *emsg[] = {"General Failure", "Input Error"};

typedef struct	user_input
{
	int			inx;		/* Current index in format string */
	int			tot;		/* Count of characters printed */
	va_list		ap;		/* Argument List */
}				uiput;

typedef struct	format_info
{							/* sSpdDioOuUxXcC */
	char		type;		/* Placeholder type */
	t_blean		algn;		/* '-' Left align placeholder */
	t_blean		sign;		/* '+' Show sign (- , +) */
	t_blean		hash;		/* Prepend w/ or leave '0', Always show decimal */
	t_blean		zero;		/* Replace padding ' ' with '0' */
	int			prec;		/* Precision: Max # of output */
	int			width;		/* Width : Minimum # of output */
	int			len;		/* Placeholder Length (destroy?)*/
	int			aglen;		/* Argument Length */
}				attrib;

int 			ft_printf(const char *frmt, ...);
void	 		pf_parse(const char *frmt, uiput *db);
int				pf_pause_parse(const char *frmt, uiput *db);
void 			pf_get_attrib(const char *frmt, attrib *ph, uiput *db);
int				pf_phmaster(attrib *ph, uiput *db);
void 			init_uinput(uiput *db);
void 			init_attrib(attrib *ipg);
int				pf_isflag(char c);
int				pf_istype(char c);
int				pf_iswidth(int c);
int				pf_print_s(attrib *ph, uiput *db);
int				pf_print_c(attrib *ph, uiput *db);
int				pf_print_i(attrib *ph, uiput *db);
int				puterror(int ecode);
void 			pf_putpad_i(attrib *ph, uiput *db);
void 			pf_putpad_c(attrib *ph, uiput *db);
int				pf_putstr(char *str);
char 			*pf_typechr(char *phstrt);
void 			pf_get_width(const char *frmt, attrib *ph, uiput *db);
int				pf_phlen(const char *frmt, uiput *db);
int				pf_putchar(char c);
int				pf_putnbr(int n);


#endif
