# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 13:28:20 by rlutt             #+#    #+#              #
#    Updated: 2016/12/29 17:45:52 by rlutt            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

HEADDR = /srcs/libft.h



CHAR_SRC =	char/ft_isalnum.c\
			char/ft_isalpha.c\
			char/ft_isascii.c\
			char/ft_isdigit.c\
			char/ft_isprint.c\
			char/ft_isspc.c

CNVRSN_SRC =	cnvrsn/ft_atoi.c\
				cnvrsn/ft_itoa.c

LST_SRC =	lst/ft_lstadd.c\
			lst/ft_lstdel.c\
			lst/ft_lstdelone.c\
			lst/ft_lsteadd.c\
			lst/ft_lstiter.c\
			lst/ft_lstmap.c\
			lst/ft_lstnew.c

MEM_SRC =	mem/ft_bzero.c\
			mem/ft_memalloc.c\
			mem/ft_memccpy.c\
			mem/ft_memchr.c\
			mem/ft_memcmp.c\
			mem/ft_memcpy.c\
			mem/ft_memdel.c\
			mem/ft_memmove.c\
			mem/ft_memset.c

NUM_SRC = 	num/ft_numlen.c

PUT_SRC = 	put/ft_putchar.c\
			put/ft_putchar_fd.c\
			put/ft_putendl.c\
			put/ft_putendl_fd.c\
			put/ft_putnbr.c\
			put/ft_putnbr_fd.c\
			put/ft_putstr.c\
			put/ft_putstrrev.c\
			put/ft_putstr_fd.c\
			put/ft_putlst.c

STR_SRC = 	str/ft_cntbnespc.c\
			str/ft_cntbspc.c\
			str/ft_cnttotspc.c\
			str/ft_cntwrds.c\
			str/ft_isstralnum.c\
			str/ft_isstralpha.c\
			str/ft_isstrascii.c\
			str/ft_isstrdigit.c\
			str/ft_isstrprint.c\
			str/ft_nxtwrdlen.c\
			str/ft_strcat.c\
			str/ft_strchr.c\
			str/ft_strclr.c\
			str/ft_strcmp.c\
			str/ft_strcpy.c\
			str/ft_strdel.c\
			str/ft_strdup.c\
			str/ft_strequ.c\
			str/ft_striter.c\
			str/ft_striteri.c\
			str/ft_strjoin.c\
			str/ft_strlcat.c\
			str/ft_strlen.c\
			str/ft_strmap.c\
			str/ft_strmapi.c\
			str/ft_strmapi.c\
			str/ft_strncat.c\
			str/ft_strncmp.c\
			str/ft_strncpy.c\
			str/ft_strnequ.c\
			str/ft_strnew.c\
			str/ft_strnstr.c\
			str/ft_strrchr.c\
			str/ft_strrev.c\
			str/ft_strsplit.c\
			str/ft_strstr.c\
			str/ft_strsub.c\
			str/ft_strtrim.c\
			str/ft_tolower.c\
			str/ft_toupper.c

TBL_SRC = 	tbl/ft_tbldel.c\
			tbl/ft_tbllen.c\
			tbl/ft_tblnew.c\

OBJ =		*.o

CCFLAGS = -I. -Wall -Werror -Wextra -c

RM = -rm -f

ARCHIVE = ar rc

INDEX = ranlib

$(NAME):
		$(CC) $(CCFLAGS) $(MEM_SRC)
		$(CC) $(CCFLAGS) $(CHAR_SRC)
		$(CC) $(CCFLAGS) $(STR_SRC)
		$(CC) $(CCFLAGS) $(PUT_SRC)
		$(CC) $(CCFLAGS) $(NUM_SRC)
		$(CC) $(CCFLAGS) $(CNVRSN_SRC)
		$(CC) $(CCFLAGS) $(LST_SRC)
		$(CC) $(CCFLAGS) $(TBL_SRC)
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
clean:
		$(RM) $(OBJ)

fclean:clean
		$(RM) $(NAME)

re:fclean $(NAME)

dau: re
		$(RM) $(OBJ)