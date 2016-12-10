/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 11:53:10 by rlutt             #+#    #+#             */
/*   Updated: 2016/12/09 02:49:47 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFT_H
#define LIBFT_H
# define INT_MIN = -2147483648
# define INT_MAX = 2147483648

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int	    ft_toupper(int c);
int	    ft_tolower(int c);
void    ft_bzero(void *s, size_t n);
void    *ft_memmove(void *dst, const void *stc, size_t len);
void 	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void 	*ft_memcpy(void *dst, const void *src, size_t n);
void	ft_putstr_fd(char const *s,int fd);
void	ft_putstr(char *str);
void	ft_putnbr_fd(int n,int fd);
void	ft_putnbr(int n);
void	ft_putendl_fd(char const *s,int fd);
void	ft_putendl(char const *s);
void	ft_putchar_fd(char c,int fd);
void	ft_putchar(char c);
void	ft_striteri(char *s,void(*f)(unsigned int,char *));
void	ft_striter(char *s,void(*f)(char *));
void	ft_strclr(char *s);
void	ft_strdel(char **as);
char	*ft_strcat(char *s1,const char *s2);
char	*ft_strrev(char *str);
char	*ft_itoa(int n);
char	*ft_strtrim(char const *s);
char	*ft_strsub(char const *s,unsigned int start,size_t len);
char	*ft_strstr(const char *big,const char *little);
char	**ft_strsplit(char const *s,char c);
char	*ft_strrchr(const char *s,int c);
char	*ft_strnstr(const char *big,const char *little, size_t n);
char	*ft_strnew(size_t size);
char	*ft_strncat(char *s1,const char *s2,size_t n);
char	*ft_strmapi(char const *s,char(*f)(unsigned int,char));
char	*ft_strchr(const char *s,int c);
char	*ft_strjoin(char const *s1,char const *s2);
char	*ft_strmap(char const *s,char(*f)(char));
char	*ft_strdup(const char *src);
char	*ft_strcpy(char *dest,char *src);
char	*ft_strncpy(char *dest,char *src,size_t size);
size_t	*ft_strlcat(char *dst,const char *src,size_t size);
size_t	ft_strlen(const char *str);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
int		ft_strequ(const char *s1, const char *s2);
int		ft_isprint(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_cnttrim(char const *s);
int		ft_atoi(char *str);
int		ft_cntspc(char *str);
int		ft_strncmp(const char *s1,const char *s2,size_t n);
int		ft_strcmp(const char *s1, const char *s2);

#endif
