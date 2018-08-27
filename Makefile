# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlutt <rlutt@student.42.us.org>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 13:28:20 by rlutt             #+#    #+#              #
#    Updated: 2018/08/27 14:06:17 by rlutt            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

OBJ = obj/*.o

CCFLAGS = -I.incl -Wall -Wextra -c

RM = -rm -fr

ARCHIVE = ar rc

INDEX = ranlib

HEADDR = /incl/char.h /incl/cnvrsn.h /incl/mem.h /incl/num.h /incl/put.h
HEADDR += /incl/str.h /incl/tbl.h /incl/bool.h /incl/gnl.h /incl/printf.h /incl/net.h

CHAR_FILES = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_isspc.c
CHAR_FILES += ft_isupper.c ft_islower.c

CNVRSN_FILES =	ft_atoi.c ft_itoa.c ft_itoabse.c

LST_FILES =	ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lsteadd.c ft_lstiter.c ft_lstmap.c ft_lstnew.c
LST_FILES += ft_lstlen.c ft_lstnewstak.c

MEM_FILES =	ft_bzero.c ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c
MEM_FILES += ft_memset.c

NUM_FILES = ft_numlen.c ft_timediff.c ft_getpercent.c

PUT_FILES = ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c
PUT_FILES += ft_putstrrev.c ft_putstr_fd.c ft_putnlst.c ft_putclst.c ft_puterror.c ft_puttbl.c ft_hexdump.c

STR_FILES = ft_cntbnespc.c ft_cntbspc.c ft_cnttotspc.c ft_cntwrds.c ft_isstralnum.c ft_isstralpha.c ft_isstrascii.c
STR_FILES += ft_isstrdigit.c ft_isstrprint.c ft_nxtwrdlen.c ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c
STR_FILES += ft_strdel.c ft_strdup.c ft_strndup.c ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c ft_strlcat.c
STR_FILES += ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c
STR_FILES += ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strrev.c ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtrim.c
STR_FILES += ft_tolower.c ft_toupper.c ft_dirjoin.c ft_strstrip.c ft_strconcat.c ft_strjoinn.c

TBL_FILES = ft_tbldel.c ft_tbllen.c ft_tbllen.c ft_itbllen.c ft_tbladdl.c ft_tbldup.c ft_tblrmline.c ft_tblrepline.c
TBL_FILES += ft_crafttbl.c ft_getenvar.c

GNL_FILES =	gnl.c

PRINTF_FILES = ft_printf.c  pf_initstructs.c pf_is.c  pf_print_s.c pf_print_i.c  pf_mod.c pf_ihelp.c pf_putstr.c
PRINTF_FILES += pf_typechr.c pf_width.c  pf_print_c.c pf_putchar.c  pf_putnbr.c pf_print_perc.c  pf_print_o.c
PRINTF_FILES += pf_print_x.c  pf_itoabse.c pf_tick.c  pf_print_p.c pf_cast_di.c  pf_cast_oux.c

NET_FILES = ft_domtoip.c ft_gethstaddr.c ft_getifaceaddr.c ft_isaddrset.c
NET_FILES += ft_makerawsock.c ft_packet_header.c ft_setsock_timeout.c
NET_FILES += ft_sockoptraw.c ft_checksum.c

CHAR_DIR = src/char
CNVRSN_DIR = src/cnvrsn
LST_DIR = src/lst
MEM_DIR = src/mem
NUM_DIR = src/num
PUT_DIR = src/put
STR_DIR = src/str
TBL_DIR = src/tbl
GNL_DIR = src/gnl
PRINTF_DIR = src/ft_printf
NET_DIR = src/net

CHAR_SRC = $(addprefix $(CHAR_DIR)/, $(CHAR_FILES))
CNVRSN_SRC = $(addprefix $(CNVRSN_DIR)/, $(CNVRSN_FILES))
LST_SRC = $(addprefix $(LST_DIR)/, $(LST_FILES))
MEM_SRC = $(addprefix $(MEM_DIR)/, $(MEM_FILES))
NUM_SRC = $(addprefix $(NUM_DIR)/, $(NUM_FILES))
PUT_SRC = $(addprefix $(PUT_DIR)/, $(PUT_FILES))
STR_SRC = $(addprefix $(STR_DIR)/, $(STR_FILES))
TBL_SRC = $(addprefix $(TBL_DIR)/, $(TBL_FILES))
GNL_SRC = $(addprefix $(GNL_DIR)/, $(GNL_FILES))
PRINTF_SRC = $(addprefix $(PRINTF_DIR)/, $(PRINTF_FILES))
NET_SRC = $(addprefix $(NET_DIR)/, $(NET_FILES))

$(NAME):
		$(shell mkdir obj)
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
		$(CC) $(CCFLAGS) $(NET_SRC)
		mv *.o obj
		$(ARCHIVE) $(NAME) $(OBJ)
		$(INDEX) $(NAME)

all: $(NAME)

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
