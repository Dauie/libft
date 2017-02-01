/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 11:53:10 by rlutt             #+#    #+#             */
/*   Updated: 2017/01/31 22:19:30 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef	struct		s_list
{
	size_t			rbyt;
	int				**crds;
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_isprint(int c);
int					ft_isdigit(int c);
int					ft_isascii(int c);
int					ft_isalpha(int c);
int					ft_isalnum(int c);
int					ft_atoi(char *str);
char				*ft_itoa(int n);
size_t				ft_numlen(long long nb, int bse);
void				ft_lsteadd(t_list **alst, t_list *nw);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *nw);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstnew(void const *content, size_t content_size);
t_list				*ft_lstnewstak(void const *content, size_t content_size);
size_t				ft_lstlen(t_list *lst);
void				ft_memdel(void **ap);
void				*ft_realloc(void *mem, size_t memsz, size_t nsz);
void				*ft_memalloc(size_t size);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				ft_bzero(void *s, size_t n);
void				*ft_memmove(void *dst, const void *stc, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putstrrev(char *str);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putnbr(int n);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putendl(char const *s);
void				ft_putchar_fd(char c, int fd);
void				ft_putclst(t_list *lst);
void				ft_putnlst(t_list *lst);
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
int					ft_cntbspc(char *str);
size_t				ft_cntwrds(char *str, char c);
size_t				ft_nxtwrdlen(char *str, char c);
size_t				ft_cnttotspc(char *str);
int					ft_cntspc(char *str);
size_t				ft_tbllen(char **tbl);
void				ft_tbldel(char **tbl);
char				**tblcnew(size_t len);
long				**tblnnew(size_t len);

#endif
