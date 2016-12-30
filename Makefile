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

OBJ =  	ft_atoi.o\
        ft_bzero.o\
        ft_memcmp.o\
        ft_memdel.o\
        ft_memalloc.o\
        ft_memchr.o\
        ft_memset.o\
        ft_memcpy.o\
		ft_memmove.o\
		ft_memccpy.o\
		ft_isalnum.o\
		ft_isalpha.o\
		ft_isascii.o\
		ft_isdigit.o\
		ft_isprint.o\
		ft_isspc.o\
		ft_putchar.o\
		ft_putchar_fd.o\
		ft_putendl.o\
		ft_putendl_fd.o\
		ft_putnbr.o\
		ft_putnbr_fd.o\
		ft_putstr.o\
		ft_putstr_fd.o\
		ft_strcat.o\
		ft_strchr.o\
		ft_strclr.o\
		ft_strcmp.o\
		ft_strcpy.o\
		ft_strdel.o\
		ft_strdup.o\
		ft_strequ.o\
		ft_striter.o\
		ft_striteri.o\
		ft_strjoin.o\
		ft_strlcat.o\
		ft_strlen.o\
		ft_strmap.o\
		ft_strmapi.o\
		ft_strncat.o\
		ft_strncpy.o\
		ft_strncmp.o\
		ft_strnequ.o\
		ft_strnew.o\
		ft_strnstr.o\
		ft_strrchr.o\
		ft_strrev.o\
		ft_strsplit.o\
		ft_strstr.o\
		ft_strsub.o\
		ft_strtrim.o\
		ft_tolower.o\
		ft_toupper.o\
		ft_lstnew.o\
		ft_lstadd.o\
		ft_lstdelone.o\
		ft_lstdel.o\
		ft_lsteadd.o\
		ft_lstmap.o\
		ft_cntwrds.o\
		ft_nxtwrdlen.o\
		ft_numlen.o\
		ft_itoa.o\
		ft_cnttotspc.o\
		ft_cntbspc.o\
		ft_lstiter.o

SRC =	ft_atoi.c\
        ft_memdel.c\
        ft_memalloc.c\
        ft_memcmp.c\
        ft_memset.c\
        ft_bzero.c\
        ft_memchr.c\
        ft_memmove.c\
		ft_memccpy.c\
		ft_memcpy.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_isspc.c\
		ft_putchar.c\
		ft_putchar_fd.c\
		ft_putendl.c\
		ft_putendl_fd.c\
		ft_putnbr.c\
		ft_putnbr_fd.c\
		ft_putstr.c\
		ft_putstr_fd.c\
		ft_strcat.c\
		ft_strchr.c\
		ft_strclr.c\
		ft_strcmp.c\
		ft_strcpy.c\
		ft_strdel.c\
		ft_strdup.c\
		ft_strequ.c\
		ft_striter.c\
		ft_striteri.c\
		ft_strjoin.c\
		ft_strlcat.c\
		ft_strlen.c\
		ft_strmap.c\
		ft_strmapi.c\
		ft_strncat.c\
		ft_strncpy.c\
		ft_strncmp.c\
		ft_strnequ.c\
		ft_strnew.c\
		ft_strnstr.c\
		ft_strrev.c\
		ft_strrchr.c\
		ft_strsplit.c\
		ft_strstr.c\
		ft_strsub.c\
		ft_strtrim.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_lstnew.c\
		ft_cntwrds.c\
		ft_numlen.c\
		ft_itoa.c\
		ft_nxtwrdlen.c\
		ft_lstdelone.c\
		ft_lstadd.c\
		ft_lstiter.c\
		ft_lsteadd.c\
		ft_lstmap.c\
		ft_cnttotspc.c\
		ft_cntbspc.c\
		ft_lstdel.c

CCFLAGS = -I. -Wall -Werror -Wextra -c

RM = -rm -f

ARCHIVE = ar rc $(NAME)

INDEX = ranlib

$(NAME):
		$(CC) $(CCFLAGS) $(SRC)
		$(ARCHIVE) $(OBJ)
		$(INDEX) $(NAME)

all:$(NAME)



clean:
		$(RM) $(OBJ)

fclean:clean
		$(RM) $(NAME)

re:fclean $(NAME)

dau: re
		$(RM) $(OBJ)