# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 13:28:20 by rlutt             #+#    #+#              #
#    Updated: 2017/03/09 13:37:31 by rlutt            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

OBJ = *.o

CCFLAGS = -I.incl -g -Wall -Werror -Wextra -c

RM = -rm -f

ARCHIVE = ar rc

INDEX = ranlib

HEADDR = /incl/char.h /incl/cnvrsn.h /incl/mem.h /incl/num.h /incl/put.h \
		/incl/str.h /incl/tbl.h /incl/bool.h /incl/gnl.h incl/primsz.h \
		/incl/printf.h

CHAR_SRC =	src/primitive/char/ft_isalnum.c src/primitive/char/ft_isalpha.c \
			src/primitive/char/ft_isascii.c src/primitive/char/ft_isdigit.c \
			src/primitive/char/ft_isprint.c src/primitive/char/ft_isspc.c

CNVRSN_SRC =	src/primitive/cnvrsn/ft_atoi.c src/primitive/cnvrsn/ft_itoa.c \
				src/primitive/cnvrsn/ft_itoabse.c

LST_SRC =	src/typedefined/lst/ft_lstadd.c \
			src/typedefined/lst/ft_lstdel.c src/typedefined/lst/ft_lstdelone.c \
			src/typedefined/lst/ft_lsteadd.c src/typedefined/lst/ft_lstiter.c \
			src/typedefined/lst/ft_lstmap.c src/typedefined/lst/ft_lstnew.c \
			src/typedefined/lst/ft_lstlen.c src/typedefined/lst/ft_lstnewstak.c

MEM_SRC =	src/primitive/mem//ft_bzero.c src/primitive/mem/ft_memalloc.c \
			src/primitive/mem/ft_memccpy.c src/primitive/mem/ft_memchr.c \
			src/primitive/mem/ft_memcmp.c src/primitive/mem/ft_memcpy.c \
			src/primitive/mem/ft_memdel.c src/primitive/mem/ft_memmove.c \
			src/primitive/mem/ft_memset.c src/primitive/mem/ft_realloc.c \
			src/primitive/mem/ft_calloc.c

NUM_SRC = 	src/primitive/num/ft_numlen.c

PUT_SRC = 	src/primitive/put/ft_putchar.c src/primitive/put/ft_putchar_fd.c \
			src/primitive/put/ft_putendl.c src/primitive/put/ft_putendl_fd.c \
			src/primitive/put/ft_putnbr.c src/primitive/put/ft_putnbr_fd.c \
			src/primitive/put/ft_putstr.c src/primitive/put/ft_putstrrev.c \
			src/primitive/put/ft_putstr_fd.c src/primitive/put/ft_putnlst.c \
			src/primitive/put/ft_putclst.c

STR_SRC = 	src/primitive/str/ft_cntbnespc.c \
			src/primitive/str/ft_cntbspc.c src/primitive/str/ft_cnttotspc.c \
			src/primitive/str/ft_cntwrds.c src/primitive/str/ft_isstralnum.c \
			src/primitive/str/ft_isstralpha.c src/primitive/str/ft_isstrascii.c \
			src/primitive/str/ft_isstrdigit.c src/primitive/str/ft_isstrprint.c \
			src/primitive/str/ft_nxtwrdlen.c src/primitive/str/ft_strcat.c \
			src/primitive/str/ft_strchr.c src/primitive/str/ft_strclr.c \
			src/primitive/str/ft_strcmp.c src/primitive/str/ft_strcpy.c \
			src/primitive/str/ft_strdel.c src/primitive/str/ft_strdup.c \
			src/primitive/str/ft_strndup.c src/primitive/str/ft_strequ.c \
			src/primitive/str/ft_striter.c src/primitive/str/ft_striteri.c \
			src/primitive/str/ft_strjoin.c src/primitive/str/ft_strlcat.c \
			src/primitive/str/ft_strlen.c src/primitive/str/ft_strmap.c \
			src/primitive/str/ft_strmapi.c src/primitive/str/ft_strmapi.c \
			src/primitive/str/ft_strncat.c src/primitive/str/ft_strncmp.c \
			src/primitive/str/ft_strncpy.c src/primitive/str/ft_strnequ.c \
			src/primitive/str/ft_strnew.c src/primitive/str/ft_strnstr.c \
			src/primitive/str/ft_strrchr.c src/primitive/str/ft_strrev.c \
			src/primitive/str/ft_strsplit.c src/primitive/str/ft_strstr.c \
			src/primitive/str/ft_strsub.c src/primitive/str/ft_strtrim.c \
			src/primitive/str/ft_tolower.c src/primitive/str/ft_toupper.c

TBL_SRC = 	src/primitive/tbl/ft_tbldel.c src/primitive/tbl/ft_tbllen.c \
			src/primitive/tbl/ft_tblcnew.c src/primitive/tbl/ft_tblnnew.c \
			src/primitive/tbl/ft_tbllen.c src/primitive/tbl/ft_itbllen.c \
			src/primitive/tbl/ft_tbladdl.c

GNL_SRC =	src/futil/gnl/gnl.c

PRINTF_SRC =src/ft_printf/ft_printf.c src/ft_printf/pf_initstructs.c \
			src/ft_printf/pf_is.c src/ft_printf/pf_print_s.c \
			src/ft_printf/pf_print_i.c \
			src/ft_printf/pf_puterror.c src/ft_printf/pf_putpad_c.c \
			src/ft_printf/pf_putstr.c src/ft_printf/pf_typechr.c \
			src/ft_printf/pf_width.c src/ft_printf/pf_print_c.c \
			src/ft_printf/pf_putchar.c src/ft_printf/pf_putnbr.c \
			src/ft_printf/pf_print_perc.c src/ft_printf/pf_print_o.c

$(NAME):
		$(CC) $(CCFLAGS) $(MEM_SRC)
		$(CC) $(CCFLAGS) $(CHAR_SRC)
		$(CC) $(CCFLAGS) $(STR_SRC)
		$(CC) $(CCFLAGS) $(PUT_SRC)
		$(CC) $(CCFLAGS) $(NUM_SRC)
		$(CC) $(CCFLAGS) $(CNVRSN_SRC)
		$(CC) $(CCFLAGS) $(LST_SRC)
		$(CC) $(CCFLAGS) $(TBL_SRC)
		$(CC) $(CCFLAGS) $(GNL_SRC)
		$(CC) $(CCFLAGS) $(PRINTF_SRC)
		$(ARCHIVE) $(NAME) $(OBJ)
		$(INDEX) $(NAME)

all:$(NAME)

mem:
		$(CC) $(CCFLAGS) $(MEM_SRC)
		$(ARCHIVE) $(NAME) $(OBJ)
		$(INDEX) $(NAME)
char:
		$(CC) $(CCFLAGS) $(CHAR_SRC)
		$(ARCHIVE) $(NAME) $(OBJ)
		$(INDEX) $(NAME)
str:
		$(CC) $(CCFLAGS) $(STR_SRC)
		$(ARCHIVE) $(NAME) $(OBJ)
		$(INDEX) $(NAME)
put:
		$(CC) $(CCFLAGS) $(PUT_SRC)
		$(ARCHIVE) $(NAME) $(OBJ)
		$(INDEX) $(NAME)
num:
		$(CC) $(CCFLAGS) $(NUM_SRC)
		$(ARCHIVE) $(NAME) $(OBJ)
		$(INDEX) $(NAME)
cnvrsn:
		$(CC) $(CCFLAGS) $(CNVRSN_SRC)
		$(ARCHIVE) $(NAME) $(OBJ)
		$(INDEX) $(NAME)
lst:
		$(CC) $(CCFLAGS) $(LST_SRC)
		$(ARCHIVE) $(NAME) $(OBJ)
		$(INDEX) $(NAME)
tbl:
		$(CC) $(CCFLAGS) $(TBL_SRC)
		$(ARCHIVE) $(NAME) $(OBJ)
		$(INDEX) $(NAME)
gnl:
		$(CC) $(CCFLAGS) $(GNL_SRC)
		$(ARCHIVE) $(NAME) $(OBJ)
		$(INDEX) $(NAME)
printf:
		$(CC) $(CCFLAGS) $(PRINTF_SRC)
		$(ARCHIVE) $(NAME) $(OBJ)
		$(INDEX) $(NAME)
clean:
		$(RM) $(OBJ)

fclean:clean
		$(RM) $(NAME)

re:fclean $(NAME)

dau: re
		$(RM) $(OBJ)
