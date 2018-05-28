/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 20:07:08 by rlutt             #+#    #+#             */
/*   Updated: 2018/05/27 18:57:59 by dauie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_H
# define STR_H

# include <stdlib.h>
# include <stdarg.h>
# include "char.h"
# include "mem.h"

void				ft_striteri(char *s, void(*f)(unsigned int, char *));
void				ft_striter(char *s, void(*f)(char *));
void				ft_strclr(char *s);
void				ft_strdel(char **as);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strrev(char *str);
char				*ft_strtrim(char const *s);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strstr(const char *big, const char *little);
char				**ft_strsplit(char const *s, char c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strnstr(const char *big, const char *little, size_t n);
char				*ft_strnew(size_t size);
char				*ft_strncat(char *s1, const char *s2, size_t n);
char				*ft_strmapi(char const *s, char(*f)(unsigned int, char));
char				*ft_strchr(const char *s, int c);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strjoinn(int n, ...);
char				*ft_dirjoin(const char *s1, const char *s2);
char				*ft_strmap(char const *s, char(*f)(char));
char				*ft_strdup(const char *src);
char				*ft_strndup(const char *src, size_t len);
char				*ft_strcpy(char *dest, char *src);
char				*ft_strncpy(char *dest, char *src, size_t size);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
size_t				ft_strlcat(char *dst, const char *src, int size);
size_t				ft_strlen(const char *str);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
int					ft_strequ(const char *s1, const char *s2);
int					ft_isstralnum(char *str);
int					ft_isstralpha(char *str);
int					ft_isstrdigit(char *str);
int					ft_isstrascii(char *str);
int					ft_isstrprint(char *str);
size_t				ft_cntbspc(const char *str);
int					ft_cntspc(char *str);
size_t				ft_cntwrds(char *str, char c);
size_t				ft_nxtwrdlen(char *str, char c);
size_t				ft_cnttotspc(const char *str);
char				*ft_strstrip(char *str, int c);
char 				*ft_strconcat(char *stra, char *strb);

#endif
